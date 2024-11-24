t = int(input())
v = 'ae'
c = 'bcd'
for _ in range(t):
	n = int(input())
	pal = input()
	s = ''
 
	for p in pal:
		if p in v:
			s += 'V'
		else:
			s += 'C'

	answer = ''
	for i in range(n):
		if s[i] == 'C' and i != n-1:
				if s[i+1] == 'C':
					answer += f'{pal[i]}.'
				else:
					if answer != '' and answer[-1] != '.': answer += '.'
					answer += pal[i]
		else:
			answer += pal[i]

	print(answer)