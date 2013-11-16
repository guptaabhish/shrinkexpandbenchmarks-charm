import sys, os, subprocess, time
import datetime,re


def findProcess( processId ):
    ps= subprocess.Popen("ps -ef | grep "+processId+" | grep -v grep", shell=True, stdout=subprocess.PIPE)
#    ps= subprocess.Popen("ps -ef")
    output = ps.stdout.read()
    ps.stdout.close()
    ps.wait()
    return output
def isProcessRunning( processId):
    output = findProcess( processId )
    if re.search(processId, output) is None:
        return False
    else:
        return True

print isProcessRunning("jacobi2d")
