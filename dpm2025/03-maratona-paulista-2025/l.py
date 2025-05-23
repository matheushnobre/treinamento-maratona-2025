n = int(input())
pilhas = []

for i in range(n):
	p = input().split()
	pilhas.append([int(i) for i in p[1:]])

if n != 2:
	ans = 'S'
elif n == 2:
	ans = 'S'

	if len(set(pilhas[0])) == 2 and len(set(pilhas[1])) == 2:
		ans = 'N'
	elif 1 in pilhas[1] and 2 in pilhas[0]:
		ans = 'N'

	for i in range(1, len(pilhas[0])):
		if pilhas[0][i] < pilhas[0][i-1]:
			ans = 'N'
	for i in range(1, len(pilhas[1])):
		if pilhas[1][i] > pilhas[1][i-1]:
			ans = 'N'

print(ans)