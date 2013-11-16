//#include "liveViz.h"
#include "wave2d.decl.h"
#include "PowerLog.decl.h"
//#include "PowerLogger.h"
//
/*
//used for PowerCap Cluster paper
#define TotalDataWidth  48000
#define TotalDataHeight 24000
#define chareArrayWidth  20
#define chareArrayHeight 120

#define TotalDataWidth  6000
#define TotalDataHeight 6000
#define chareArrayWidth  6
#define chareArrayHeight 10
*/
// used for 201309_PowerCap

#define TotalDataWidth  48000
#define TotalDataHeight 48000
#define chareArrayWidth  10
#define chareArrayHeight 120

// This program solves the 2-d wave equation over a grid, displaying pretty results through liveViz
// The discretization used below is described in the accompanying paper.pdf
// Author: Isaac Dooley 2008

/*readonly*/ CProxy_Main mainProxy;
/*readonly*/ CProxy_Wave arrayProxy;
/*
// This gives power around 3.7Kw on tarekc
#define TotalDataWidth  15000
#define TotalDataHeight 12800
#define chareArrayWidth  20
#define chareArrayHeight 128 
/*
#define total_iterations 7720
#define numInitialPertubations 5
*/
double ckpt_period_time = 18000.4;
int ckpt = 230;//380;
float LB_PERIOD=7;
float avg_it;

/*
// Original vals
#define TotalDataWidth  19200
#define TotalDataHeight 22400
#define chareArrayWidth  128
#define chareArrayHeight 16
*/


/*
#define TotalDataWidth  26000
#define TotalDataHeight 26000
#define chareArrayWidth  4
#define chareArrayHeight 16
*/
int total_iterations;
#define numInitialPertubations 5
int ckp_iteration=10000000;

#define mod(a,b)  (((a)+b)%b)
#define left 0
#define right 1
#define up 2
#define down 3
//enum { left=0, right, up, down };

double readFileEnergyFaultDoubleLocal(char *fname)
{
        double val;
        FILE *fp=fopen(fname,"r");
        if(!fp){
                printf("[%d] Cannot open file %s (MEMCKPT) \n",CkMyPe(),fname);
                CkExit();
        }
        else
        {
          char arr1[20];
          fscanf(fp,"%s",arr1);
          val = atof(arr1);

        }
        fclose(fp);
        return val;
}


int readFileEnergyFaultIntLocal(char *fname)
{
        int val=-1;
        FILE *fp=fopen(fname,"r");
        if(!fp){
                printf("[%d] Cannot open file %s (MEMCKPT) \n",CkMyPe(),fname);
                CkExit();
        }
        else
        {
//          CkPrintf("========================== CKPT STARTING: putting 1 in ckptflag.txt ===========\n");
          fscanf(fp,"%d",&val);
        }
        fclose(fp);
        return val;
}


void writeFileEnergyFault(char *fname,double val)
{
        FILE *fp=fopen(fname,"w");
        if(!fp){
                printf("[%d] Cannot open file %s (MEMCKPT) \n",CkMyPe(),fname);
                return;
        }
        else
        {
//          CkPrintf("========================== CKPT STARTING: putting 1 in ckptflag.txt ===========\n");
          fprintf(fp,"%f",val);
        }
        fclose(fp);
}

class Main : public CBase_Main
{
public:
	float lbTime;
	float useful_work;
  int iteration;
	double lastT;
  int count;
  double startT,lastItr;
  int ckpt_period;
  int lastckpt;
	int lbItrs;

int roundUp(int numToRound, int multiple)
{
 if(multiple == 0)
 {
  return numToRound;
 }

 int remainder = numToRound % multiple;
 if (remainder == 0)
  return numToRound;
 return numToRound + multiple - remainder;
}


  Main(CkArgMsg* m) {
		//PowerLogger recx;
		lbTime = LB_PERIOD;
		lbItrs = 0;
		avg_it = 0.07;
    iteration = 0;
		lastT = CmiWallTimer();
		useful_work=0.;
    count = 0;
    mainProxy = thisProxy; // store the main proxy
		total_iterations = atof(m->argv[1]);
		ckpt = ckpt_period_time/0.081;
		ckpt = roundUp(ckpt,2);
  	ckpt_period = ckpt;
		iteration=lastckpt=0;  
    CkPrintf("Running wave2d on grid (%d,%d) chare array (%d,%d) with %d processors ckpt_period_time:%f ckpt:%d\n",TotalDataWidth,TotalDataHeight,chareArrayWidth,chareArrayHeight, CkNumPes(),ckpt_period_time,ckpt);

    // Create new array of worker chares
/*
CProxy_MyBlockMap myMap=CProxy_MyBlockMap::ckNew();
       CkArrayOptions opts(chareArrayWidth, chareArrayHeight);
       opts.setMap(myMap);
       arrayProxy=CProxy_Wave::ckNew(opts);
        for(int i=0;i<128;i++) for(int j=0;j<16;j++)
        {
        //  if(j<12) arrayProxy(i,j).setMigratable(0);
        }
*/
    arrayProxy = CProxy_Wave::ckNew(chareArrayWidth, chareArrayHeight);

		CProxy_PowerLogger pLog = CProxy_PowerLogger::ckNew(6);

    // setup liveviz
 //   CkCallback c(CkIndex_Wave::requestNextFrame(0),arrayProxy);
  //  liveVizConfig cfg(liveVizConfig::pix_color,true);
 //   liveVizInit(cfg,arrayProxy,c);
startT=lastItr=CkWallTimer();
    //Start the computation
    arrayProxy.begin_iteration();
    //CkStartQD(CkCallback(CkCallback::ckExit));
  }



  // Each worker calls this method
  void iterationCompleted(CkReductionMsg *m) {
		iteration=((int *)m->getData())[0];
		//lbTime -= avg_it;
		lbTime -= CmiWallTimer()-lastT;
		lbItrs++;
    if (iteration == total_iterations || CmiWallTimer()>300) {
      CkPrintf("Program Done! avg_it:%f\n",(CmiWallTimer()-startT)/iteration);
      CkExit();
    }
		//else if(0){
	else if(iteration != 0 && roundUp(lastckpt + ckpt_period,2)< -1){
    iteration++;
		writeFileEnergyFault("ckptperiod.txt",ckpt_period_time);
    //CkCallback cb(CkIndex_Wave::begin_iteration(),arrayProxy);
		CkCallback cb(CkIndex_Main::afterCkpt(),thisProxy);
CkPrintf("---------------------------\n");
CkExit();    
CkStartMemCheckpoint(cb);
  	double ckpt_p = CmiWallTimer()-readFileEnergyFaultIntLocal("ckptlast.txt");
    double avg_it = ckpt_p / ckpt_period;
    int ckpt_period_t = (int) ckpt_period_time / avg_it;
    if(ckpt_p>4.0)
    {
    	lastckpt = iteration;
      ckpt_period = ckpt_period_t;
			useful_work += ckpt_p;
      CkPrintf("++++ INFO ckpt_period_last:%f avg_it:%.3f lastckpt:%d ckpt_period:%d nectckpt:%d\n",ckpt_p,avg_it,lastckpt,ckpt_period,roundUp(lastckpt + ckpt_period,2));
    }
    else 
		{
			CkPrintf("+++++++++++ There was hardKill ++++++++++ ckpt_period:%d nectckpt:%d\n",
    		ckpt_period,lastckpt + ckpt_period);
			avg_it = 0.07;
    }
	}
else { 
      // Start the next iteration
      count = 0;
      iteration++;
//      if(iteration % 10 == 0) CkPrintf("Completed %d itr time  %f, total time %f\n", iteration, CkWallTimer()-lastItr, CkWallTimer()-startT);
	lastItr = CkWallTimer();

//    if(iteration % 10/*ckp_iteration*/ == 1) arrayProxy.doTrace();
//    if(iteration % 10/*ckp_iteration*/ == 3) arrayProxy.endTrace();
      //if (iteration % ckp_iteration ==ckp_iteration-2) {
			//if (iteration % 90 ==100){
			if (lbTime<-100000){
				CkPrintf("LB TIME:%f lbItrs:%d ]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]\n",lbTime,lbItrs);
        double setKillTime = readFileEnergyFaultIntLocal("setKillTime.txt");
        double killTime = readFileEnergyFaultIntLocal("killTime.txt");
        double rightNow = CmiWallTimer();
        if(setKillTime+killTime < rightNow + 2)
        {
          CkPrintf("!!!!!!!!!!!!! Avoiding LDB !!!!!!!!!!! there is a restart scheduled\n");
          arrayProxy.begin_iteration();
        }
        else
				{
          arrayProxy.doSync();
					avg_it =(LB_PERIOD-lbTime)/lbItrs;
					ckpt_period = (int) ckpt_period_time / avg_it;
					//CkPrintf("++++++++++++++++++ avg_it:%.3f lbTime:%f lbItrs:%d\n",avg_it,lbTime,lbItrs);
					lbItrs = 0;

				}
				lbTime = LB_PERIOD;

      }
      else
			{
				if(iteration%20==0)
					arrayProxy.doSync();
				else
					arrayProxy.begin_iteration();
			}
    }
  if(iteration%1==0)
  //CkPrintf("begin %d iterations x %d y %d time:%f tStep:%f avgStep:%f t_step:%f \n",iteration,thisIndex.x,thisIndex.y,CmiWallTimer(),tStep,aStep,CmiWallTimer()-lastT);
    CkPrintf("begin %d PE%d iterations time:%f t_step:%f lbTime:%.2f avg_it:%.5f time/itr:%.3f\n",iteration,CkMyPe(),CmiWallTimer(),CmiWallTimer()-lastT,lbTime,avg_it,(CmiWallTimer()-startT)/iteration);
    lastT = CmiWallTimer();

  }


void updateLastT()
{
  lastT = CmiWallTimer();
  CkPrintf("TTTTTTTTT Updating lastT:%f\n",lastT);
}


	void afterCkpt()
	{
		CkPrintf("rrrrrrrrrrrrr resuming t:%.2f rrrrrrrrr\n",CmiWallTimer());
		lastT = CmiWallTimer();
		arrayProxy.begin_iteration();
	}

};


class Wave: public CBase_Wave {
public:
  int messages_due;
  int mywidth;
  int myheight;
  double foo;
	int iteration;
	double lastT;

  double *pressure_old;  // time t-1
  double *pressure; // time t
  //double *pressure_new;  // time t+1

  double *buffers[4];


  void init() {
		iteration = 0;
    mywidth=TotalDataWidth / chareArrayWidth;
    myheight= TotalDataHeight / chareArrayHeight;

//    pressure_new  = new double[mywidth*myheight];
    pressure = new double[mywidth*myheight];
    pressure_old  = new double[mywidth*myheight];

    buffers[left] = new double[myheight];
    buffers[right]= new double[myheight];
    buffers[up]   = new double[mywidth];
    buffers[down] = new double[mywidth];
//	CcdCallOnConditionKeep(CcdPERIODIC_5s,(CcdVoidFn)printPower,NULL);
  }

  // Constructor, initialize values
  Wave() {
    init();
    usesAtSync = CmiTrue;
    messages_due = 4;
    InitialConditions();
  }

  Wave(CkMigrateMessage* m):CBase_Wave(m) {
    usesAtSync = CmiTrue;
//    init();
  }

  // Setup some Initial pressure pertubations for timesteps t-1 and t
  void InitialConditions(){
    srand(0); // Force the same random numbers to be used for each chare array element

//    for(int i=0;i<myheight*mywidth;i++)
//      pressure[i] = pressure_old[i] = 0.0;
   
    for(int s=0; s<numInitialPertubations; s++){    
      // Determine where to place a circle within the interior of the 2-d domain
      int radius = 20+rand() % 30;
      int xcenter = radius + rand() % (TotalDataWidth - 2*radius);
      int ycenter = radius + rand() % (TotalDataHeight - 2*radius);
      // Draw the circle
      for(int i=0;i<myheight;i++){
	for(int j=0; j<mywidth; j++){
/*
	  int globalx = thisIndex.x*mywidth + j; // The coordinate in the global data array (not just in this chare's portion)
	  int globaly = thisIndex.y*myheight + i;
	  double distanceToCenter = sqrt((globalx-xcenter)*(globalx-xcenter) + (globaly-ycenter)*(globaly-ycenter));
	  if (distanceToCenter < radius) {
	    double rscaled = (distanceToCenter/radius)*3.0*3.14159/2.0; // ranges from 0 to 3pi/2 
	    double t = 700.0 * cos(rscaled) ; // Range won't exceed -700 to 700
	    pressure[i*mywidth+j] = pressure_old[i*mywidth+j] = t;

	  }
*/
pressure[i*mywidth+j] = 1.0;
	}						
      }
    }

  }

  ~Wave() {
    delete [] pressure_old;
    delete [] pressure;
//    delete [] pressure_new;

    for (int i = 0; i < 4; ++i)
      delete [] buffers[i];
  }

  void begin_iteration() {
    //CkPrintf("[%d] Wave %d,%d in begin_iteration %d\n", CkMyPe(), thisIndex.x, thisIndex.y, iter);
	iteration++;
  //if(thisIndex.x==0 && thisIndex.y==0 && iteration%10==0)
  //CkPrintf("begin %d iterations x %d y %d time:%f tStep:%f avgStep:%f t_step:%f \n",iteration,thisIndex.x,thisIndex.y,CmiWallTimer(),tStep,aStep,CmiWallTimer()-lastT);
		//CkPrintf("begin %d PE%d iterations time:%f t_step:%f \n",iteration,CkMyPe(),CmiWallTimer(),CmiWallTimer()-lastT);
		//lastT = CmiWallTimer();

    double *top_edge = &pressure[0];
    double *bottom_edge = &pressure[(myheight-1)*mywidth];

    double *left_edge = new double[myheight];
    double *right_edge = new double[myheight];
    for(int i=0;i<myheight;++i){
      left_edge[i] = pressure[i*mywidth];
      right_edge[i] = pressure[i*mywidth + mywidth-1];
    }

    // Send my left edge
    thisProxy(mod(thisIndex.x-1, chareArrayWidth), thisIndex.y).recvGhosts(right, myheight, left_edge);
    // Send my right edge
    thisProxy(mod(thisIndex.x+1, chareArrayWidth), thisIndex.y).recvGhosts(left, myheight, right_edge);
    // Send my top edge
    thisProxy(thisIndex.x, mod(thisIndex.y-1, chareArrayHeight)).recvGhosts(down, mywidth, top_edge);
    // Send my bottom edge
    thisProxy(thisIndex.x, mod(thisIndex.y+1, chareArrayHeight)).recvGhosts(up, mywidth, bottom_edge);

    delete [] right_edge;
    delete [] left_edge;
  }
  
  void recvGhosts(int whichSide, int size, double ghost_values[]) {
    for(int i=0;i<size;++i)
      buffers[whichSide][i] = ghost_values[i];
    messages_due--;
    check_and_compute();
  }

  void check_and_compute() {
    if (messages_due != 0)
      return;
float n1 = CmiWallTimer();
    // Compute the new values based on the current and previous step values
double *pressure_new = new double[mywidth*myheight];
//for(int ll=0;ll<40;ll++)
    for(int i=0;i<myheight;++i){
      for(int j=0;j<mywidth;++j){

	// Current time's pressures for neighboring array locations
	double L = (j==0          ? buffers[left][i]  : pressure[i*mywidth+j-1] );
	double R = (j==mywidth-1  ? buffers[right][i] : pressure[i*mywidth+j+1] );
	double U = (i==0          ? buffers[up][j]    : pressure[(i-1)*mywidth+j] );
	double D = (i==myheight-1 ? buffers[down][j]  : pressure[(i+1)*mywidth+j] );

	// Current time's pressure for this array location
	double curr = pressure[i*mywidth+j];

	// Previous time's pressure for this array location
	double old  = pressure_old[i*mywidth+j];

	// Compute the future time's pressure for this array location
	pressure_new[i*mywidth+j] = 0.4*0.4*(L+R+U+D - 4.0*curr)-old+2.0*curr;

      }
    }
/*    
    if (thisIndex.x == 0 && thisIndex.y == 0)
      for (int j = 0; j < 50; ++j)
	for (int i = 0; i < mywidth*myheight; ++i) {
	  foo += pressure_old[i] + pressure_new[i];
	}
*/
//if(thisIndex.x==0 && thisIndex.y==0)
	//if(CkMyPe()==3 && (iteration%100==95 || iteration%100==5))
 //CkPrintf("Coming itr:%d [%d,%d] T:%f\n",iteration,thisIndex.x,thisIndex.y,CmiWallTimer()-n1);
    // Advance to next step by shifting the data back one step in time
/*
    double *tmp = pressure_old;
    pressure_old = pressure;
    pressure = pressure_new;
    pressure_new = tmp;
*/
delete [] pressure_new;
    messages_due = 4;

      int killPe;
      if((iteration +1) % ckp_iteration==-100) killPe = readFileEnergyFaultIntLocal("killPe.txt");
      if(((iteration +1) % ckp_iteration==-100) && CkMyPe()==killPe)
      {
        //CkPrintf("------ At iteration%d PE%d is writing time:%f to lasttime\n",iteration,CkMyPe(),CmiWallTimer());
        writeFileEnergyFault("lasttime.txt",CmiWallTimer());
      }


//    contribute(CkCallback(CkIndex_Main::iterationCompleted(), mainProxy));
		contribute(sizeof(int),&iteration,CkReduction::max_int,CkCallback(CkIndex_Main::iterationCompleted(NULL),mainProxy));
  }

  void doSync() {
//	if(CkMyPe()==3) CkPrintf("WWWWWWWWWWWWWOOOOOOWWWW\n");
    AtSync();
  }

  void doTrace() {
    traceBegin();
  }

  void endTrace() {
    traceEnd();
  }


  void ResumeFromSync() {
    //CkPrintf("[%d] Wave %d,%d in resume\n", CkMyPe(), thisIndex.x, thisIndex.y);
    //contribute(CkCallback(CkIndex_Main::iterationCompleted(), thisProxy));
  if(thisIndex.x == 0 && thisIndex.y == 0)
      mainProxy.updateLastT();

    thisProxy(thisIndex).begin_iteration();
  }

  void pup(PUP::er &p)
  {
    CBase_Wave::pup(p);
    p|messages_due;
		p|mywidth;
		p|myheight;
		p|foo;
		p|iteration;
		p|lastT;
		size_t size=mywidth*myheight;
		if(p.isUnpacking()){
			pressure_old = new double[size];
			pressure = new double[size];
			//pressure_new = new double[size];
      buffers[left] = new double[myheight];
      buffers[right]= new double[myheight];
      buffers[up]   = new double[mywidth];
      buffers[down] = new double[mywidth];
		}

    for(int i=0;i<4;i++)
			p|*buffers[i];
/*
		p(buffers[left],myheight);
		p(buffers[right],myheight);
		p(buffers[up],mywidth);
		p(buffers[down],mywidth);
*/
    p(pressure,size);
    p(pressure_old,size);
//		p(pressure_new,size);
/*
    	PUParray(p,pressure_old,mywidth*myheight);  // time t-1
    	PUParray(p,pressure,mywidth*myheight); // time t
    // temp var no need to pup
//	PUParray(p,pressure_new,mywidth*myheight);  // time t+1
    PUParray(p,buffers[left] ,myheight);
    PUParray(p,buffers[right],myheight);
    PUParray(p,buffers[up],mywidth);
    PUParray(p,buffers[down],mywidth);
*/
  }

  // provide my portion of the image to the graphical liveViz client                           
/*  void requestNextFrame(liveVizRequestMsg *m){

    // Draw my part of the image, plus a nice 1px border along my right/bottom boundary
    int sx=thisIndex.x*mywidth; // where my portion of the image is located
    int sy=thisIndex.y*myheight;
    int w=mywidth; // Size of my rectangular portion of the image
    int h=myheight;
    
    // set the output pixel values for my rectangle
    // Each RGB component is a char which can have 256 possible values.
    unsigned char *intensity= new unsigned char[3*w*h];
    for(int i=0;i<myheight;++i){
      for(int j=0;j<mywidth;++j){

        double p = pressure[i*mywidth+j];
        if(p > 255.0) p = 255.0;    // Keep values in valid range
        if(p < -255.0) p = -255.0;  // Keep values in valid range
        	
        if(p > 0) { // Positive values are red
          intensity[3*(i*w+j)+0] = 255; // RED component
          intensity[3*(i*w+j)+1] = 255-p; // GREEN component
          intensity[3*(i*w+j)+2] = 255-p; // BLUE component
        } else { // Negative values are blue
          intensity[3*(i*w+j)+0] = 255+p; // RED component
          intensity[3*(i*w+j)+1] = 255+p; // GREEN component
          intensity[3*(i*w+j)+2] = 255; // BLUE component
        }
	
      }
    }
    
    // Draw a green border on right and bottom of this chare array's pixel buffer. 
    // This will overwrite some pressure values at these pixels.
    for(int i=0;i<h;++i){
      intensity[3*(i*w+w-1)+0] = 0;     // RED component
      intensity[3*(i*w+w-1)+1] = 255;   // GREEN component
      intensity[3*(i*w+w-1)+2] = 0;     // BLUE component
    }
    for(int i=0;i<w;++i){
      intensity[3*((h-1)*w+i)+0] = 0;   // RED component
      intensity[3*((h-1)*w+i)+1] = 255; // GREEN component
      intensity[3*((h-1)*w+i)+2] = 0;   // BLUE component
    }

    liveVizDeposit(m, sx,sy, w,h, intensity, this);
    delete[] intensity;

  }
  */
};

class MyBlockMap : public CkArrayMap
     {
      public:
				int mapper[128][16];
       MyBlockMap(void) {
				for(int i=0;i<128;i++) for(int j=0;j<16;j++) 
				{
					if(j<0) mapper[i][j] = i;
					else  mapper[i][j] = rand()%128;
				}
			}
       MyBlockMap(CkMigrateMessage *m){}
       int registerArray(CkArrayIndex& numElements,CkArrayID aid) {
         return 0;
       }
    int procNum(int, const CkArrayIndex &idx) {
      int *index = (int *)idx.data();
      return mapper[index[0]][index[1]];
    }

     };

#include "wave2d.def.h"
