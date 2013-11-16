#!/usr/bin/env python
import sys, os, subprocess, time
import datetime
import numpy as np

def gennodelistfile(num_nodes):
	f = open('nodelist', 'w')
	f.write('group main ++shell /usr/bin/ssh\n')
	for i in range(num_nodes):
		f.write('host tarekc' + str(41+i) + '\n')
	f.flush()
	f.close()

	
nodes = [6, 8, 9, 10, 11, 12, 12, 15, 16, 17, 18, 20, 20, 20, 20 ]
pkgPower = [36, 33, 34, 35, 36, 37, 40, 32, 33, 34, 34, 31, 31, 34, 34 ]
dramPower = [16, 16, 16, 16, 16, 16, 18, 16, 16, 16, 16, 14, 18, 18, 18]

logdir = '/home/sarood1/fa12-cs598lvk-project/util/log/exp'

execdir = [
						'/home/sarood1/fa12-cs598lvk-project/benchmarks/wavetemp/'	
           ]
runcmd = [
            'make test', 
         ]
appname = [
            'wavetemp_C50_M16'
          ]
logfile = './mylogexp'
lf = open(logfile, 'w')

#powerFile = '/dcsdata/home/alanger/workspace/fa12-cs598lvk-project/util/sample.log'

for i,app in enumerate(execdir):
	print 'profiling :',appname[i],'\n'
	lf.write('profiling: ' + appname[i]+'\n')
	myptr = 0
	for scale in nodes:
				pkgpower = pkgPower[myptr]
				drampower = dramPower[myptr]

				for n in range(0,20):
					print 'setting on',str(41+n),' pkg: ',str(pkgpower),' mem: ',str(drampower)
					os.system('ssh tarekc' + str(41+n) + ' ~/fa12-cs598lvk-project/util/power_gov/setpowerlimits '+str(pkgpower)+' '+str(drampower))


				lf.write('running on ' + str(scale) + ' nodes\n')
#		for pkgpower in pkgPower:
#			for drampower in dramPower:
				lf.write('profiling at pkg power=' + str(pkgpower) + "w, dram power=" + str(drampower) + 'w\n')

				#set the power capping on all the nodes

				lf.write("changing to directory: " + execdir[i] + '\n')
				os.chdir(execdir[i] )
				runcmd[i] = './charmrun ./wave2d 2200.40 +p'+ str(scale*6) +' ++nodelist nodes40 +setcpuaffinity +pemap 0-5 |tee out'
				print 'running wavetemp on ' + str(scale) + ' nodes, pkg power ' + str(pkgpower) + 'w, dram power ' + str(drampower) + 'w\n'
				lf.write('running command: ' + runcmd[i]+'\n')
				lf.flush()

				stime = str(time.mktime(datetime.datetime.now().timetuple()))
				print runcmd[i]
				os.system(runcmd[i])
				os.system('mkdir '+logdir+'/'+appname[i] + '_' + str(scale) + 'n_' + str(pkgpower) + '_' + str(drampower))
				os.system('mv out temp_pow.log.* '+logdir+'/'+appname[i] + '_' + str(scale) + 'n_' + str(pkgpower) + '_' + str(drampower)+'/')
				etime = str(time.mktime(datetime.datetime.now().timetuple()))
				lf.write('job wall times '+ stime +' '+ etime + '\n')
				lf.flush()
				time.sleep(20)
				myptr = myptr+1
