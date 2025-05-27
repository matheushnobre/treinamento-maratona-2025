n = int(input())
s = input()
t = input()

b = s.count('*')
a = 0

for i in range(n):
	if s[i] == '*' and t[i] != '*':
		a += 1

res = a / b 
print(f'{res:.2f}')