l=int(input())
t=0
if l%2:
	print"still running"
	exit()
while l>0:
	l-=1
	t-=int(input())*((l%2)*2-1)
print t