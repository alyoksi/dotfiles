n= int(input())
p=[int(i)for i in input().split()]
fl=True
ans=[]
d=dict()
for i in p:
	if i in d.keys():
		if len(d[i])==0:
			fl=False
			break
		else:

			ans+=[d[i][0]]
			d[i].remove(d[i][0])
	else:
		d[i]=[]
		for j in range(1,int((i**(1/2)))):
			if i %j == 0:
				l = i//j
				d[i]+=[[l,j],[j,l]]
		if (int(i**(1/2))**2)==i:
			d[i]+=[int(i**(1/2)),int(i**(1/2))]
if fl:
	print("Yes")
	for i in ans:
		print(i[0],i[1])
else:
	print("No")