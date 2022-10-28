l=int(input())
if(l%2):
	print"still running"
	exit()
t=0
while(l>0):
	t-=int(input())-int(input())
	l-=2
print t