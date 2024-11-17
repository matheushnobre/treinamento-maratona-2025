t = int(input())
for i in range(t):
	n = int(input())
	soma = 0
	while n != 1:
		soma += n 
		n = n//2
	print(soma+1)