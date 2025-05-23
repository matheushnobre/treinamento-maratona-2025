e = input()
aux = 'BR-SP'

ans = 'S'
for i in range(5):
	if e[i] != '?' and aux[i] != e[i]:
		ans = 'N'
	elif e[i] == '?' and i in [3, 4]:
		if ans == 'S': ans = 'T'	
print(ans)