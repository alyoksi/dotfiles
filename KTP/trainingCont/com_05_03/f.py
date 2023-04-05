n=int(input())
p=[0 for i in range(28)]
f=[0 for i in range(10**6)]
for i in range(10):
	for j in range(10):
		for k in range(10):
			for l in range(10):
				for h in range(10):
					for t in range(10):
						x=abs((t+h+l)-(k+j+i))
						m=0
						for q in range(0,x):
							m+=p[q]
						
						f[t+h*10+l*100+k*1000+j*10000+i*100000]=m
						p[x]+=1
import sys

for i in range(n):
	sys.stdout.write(str((f[int(sys.stdin.readline())]))+'\n')
