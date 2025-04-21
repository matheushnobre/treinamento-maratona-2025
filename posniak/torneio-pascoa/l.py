while True:
	try:
		s = input()
		if s.index('L') == 2:
			print("Esse eh o meu lugar")
		else:
			print('Oi, Leonard')
	except EOFError:
		break