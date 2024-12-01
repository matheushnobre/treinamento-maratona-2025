letters = 'ABCDEFGHIJLMNOPQRSTUVWXYZ'

dic = {'K': (1, 3)}
x = 1
y = 1
for l in letters:
	dic[l] = (x, y)
	y += 1
	if y == 6:
		x += 1
		y = 1

n = int(input())
for c in input():
	s = dic[c]
	print('*' * s[0], end=' ')
	print('*' * s[1], end=' ')