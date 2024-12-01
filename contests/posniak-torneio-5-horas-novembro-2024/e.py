n = int(input())
string = input()

s = []
temp = ''
for i in range(n-1):
	if len(temp) <= 1:
		temp += string[i]
	elif len(temp) == 2:
		if string[i] == string[i+1]:
			temp += string[i]
			s.append(temp)
			temp = ''
		else:
			s.append(temp)
			temp = string[i]

temp += string[-1]
s.append(temp)

saida = ''
for v in s:
	if v == 'ab':
		saida += '0'
	elif v == 'aba':
		saida += '1'
	else:
		saida = ':('
		break
print(saida)
	