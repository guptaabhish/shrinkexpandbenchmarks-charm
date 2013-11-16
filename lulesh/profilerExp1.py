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

	
nodes = [6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 17, 18, 20, 20, 20]
pkgPower = [47, 47, 47, 47, 47, 47, 47, 47, 47, 47, 42, 42, 38, 42, 46]
dramPower = [14, 14, 14,14, 14, 14,14, 14, 14,14, 14, 14, 13, 14, 12]

logdir = '/home/sarood1/fa12-cs598lvk-project/util/log/exp'

execdir = [
						'/home/sarood1/fa12-cs598lvk-project/benchmarks/lulesh/'	
           ]
runcmd = [
            'make test', 
         ]
appname = [
            'lulesh1_C52_M52'
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
				runcmd[i] = './charmrun +p'+str(scale*6) +' ./llCharm 512 512 640 64 16 32 100000 3000 180000.67 +setcpuaffinity +pemap 0-5 ++nodelist nodes40 |tee out'
				print 'running lulesh on ' + str(scale) + ' nodes, pkg power ' + str(pkgpower) + 'w, dram power ' + str(drampower) + 'w\n'
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
