def insertion_sort(a):
	for i in range(len(a)):
		next=i
		while(next>0 and a[next]<a[next-1]):
			(a[next],a[next-1])=(a[next-1],a[next])
			next-=1
	return a

a=[0]*(10**7)
n=len(a)
for i in range(n):
	a[i]=10-i
print(a)
a=insertion_sort(a)
print(a)

