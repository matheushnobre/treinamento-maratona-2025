for _ in range(int(input())):
  s = input()
  t = input()
  
  i = 0
  j = 0
  
  ans = True
  while i < len(s):
    cont = 1
    i += 1 
    
    while i < len(s) and s[i] == s[i-1]:
      cont += 1
      i += 1
      
    oth = 1 
    j += 1
    try:
      if s[i-1] != t[j-1]:
        ans = False
        break 
    except IndexError:
      ans = False 
      break 
    
    while j < len(t) and t[j] == t[j-1]:
      oth += 1 
      j += 1
      
    if not(cont <= oth <= cont*2):
      ans = False
      break
  
  if j < len(t): print('NO')
  elif ans: print('YES')
  else: print('NO')