for _ in range(int(input())):
  n = int(input())
  e = input()
  if n == 1:
    if e == 'W': print('YES')
    else: print('NO')
  elif n == 2:
    if len(set(e)) == 1:
      if 'W' in e: print('YES')
      else: print('NO')
    else:
      if 'W' in e: print('NO')
      else: print('YES')
  elif 'W' not in e:
    if len(set(e)) == 2: print('YES')
    else: print('NO')
  else:
    ans = True
    aux = e.split('W')
    for i in aux:
      if i == '': continue
      elif len(i) == 1: ans = False
      elif len(set(i)) == 1: ans = False
    if ans: print('YES')
    else: print('NO')