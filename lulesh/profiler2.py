#!/usr/bin/env python
import sys, os, subprocess, time
import datetime
#import numpy as np

def gennodelistfile(num_nodes):
	f = open('nodelist', 'w')
	f.write('group main ++shell /usr/bin/ssh\n')
	for i in range(num_nodes):
		f.write('host tarekc' + str(41+i) + '\n')
	f.flush()
	f.close()

logfile = './mylog'
lf = open(logfile, 'w')

	
nodes = [20,16,12,8,4]
#nodes = [20]
pkgPower = [28 + 2*i for i in range(17)]
dramPower = [80]#[8 + 2*i for i in range(6)][::-1]
print pkgPower
lf.write(str(pkgPower))
#sys.exit()
logdir = '/home/sarood1/Work/201309_PowerDC/log/lulesh_512x512'
#logdir = '/home/sarood1/Work/201309_PowerDC/log/lulesh_20n'

execdir = [
						'/home/sarood1/Work/201309_PowerDC/benchmarks/lulesh/'	
           ]
runcmd = [
            'make test', 
         ]
appname = [
            'run'
          ]

#powerFile = '/dcsdata/home/alanger/workspace/fa12-cs598lvk-project/util/sample.log'

for i,app in enumerate(execdir):
	lf.write('profiling: ' + appname[i]+'\n')
	for scale in nodes:
		lf.write('running on ' + str(scale) + ' nodes\n')
		for pkgpower in pkgPower:
			for drampower in dramPower:
				lf.write('profiling at pkg power=' + str(pkgpower) + "w, dram power=" + str(drampower) + 'w\n')

				#set the power capping on all the nodes
				print 'setting power limts on all the nodes'
				for n in range(scale):
					print 'setting on',str(41+n),' pkg:',str(pkgpower),' mem: ',str(drampower)
					os.system('ssh tarekc' + str(41+n) + ' ~/fa12-cs598lvk-project/util/power_gov/setpowerlimits ' + str(pkgpower) + ' ' + str(drampower))
#					print 'ssh tarekc' + str(41+n) + ' ~/fa12-cs598lvk-project/util/power_gov/setpowerlimits ' + str(pkgpower) + ' ' + str(drampower)
				print 'power limts set on all the nodes'

				lf.write("changing to directory: " + execdir[i] + '\n')
				os.chdir(execdir[i] )
#				gennodelistfile(scale)
#				./charmrun +p120 ./jacobi2d 72000 600 10000 +setcpuaffinity +pemap 0-5 ++nodelist nodes40
#				runcmd[i] = './charmrun +p'+ str(scale*6) +' ./jacobi2d 72000 600 10000 +setcpuaffinity +pemap 0-5 ++nodelist nodes40 |tee out'
				runcmd[i] = './charmrun +p'+str(scale*6) +' ./llCharm 512 512 640 64 16 32 100000 3000 180000.67 +setcpuaffinity +pemap 0-5 ++nodelist nodes40 |tee out'
				print 'running lulesh on ' + str(scale) + ' nodes, pkg power ' + str(pkgpower) + 'w, dram power ' + str(drampower) + 'w\n'
				lf.write('running command: ' + runcmd[i]+'\n')
				print 'running command: ' + runcmd[i]+'\n'
				lf.flush()

				stime = str(time.mktime(datetime.datetime.now().timetuple()))

				os.system(runcmd[i])
				os.system('mkdir '+logdir+'/'+appname[i] + '_' + str(scale) + 'n_' + str(pkgpower) + '_' + str(drampower))
				os.system('mv out temp_pow.log.* '+logdir+'/'+appname[i] + '_' + str(scale) + 'n_' + str(pkgpower) + '_' + str(drampower)+'/')
				etime = str(time.mktime(datetime.datetime.now().timetuple()))
				lf.write('job wall times '+ stime +' '+ etime + '\n')
				lf.flush()
				time.sleep(15)
