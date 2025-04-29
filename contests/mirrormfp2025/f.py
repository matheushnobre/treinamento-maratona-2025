n = int(input())
p = int(input())
k = int(input())
 
l = [i for i in range(1, n+1)]
del l[p-1]
 
print(l[(p+k-1) % (n-1)])