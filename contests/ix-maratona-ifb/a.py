while True:
  try:
    s1 = input()
    s2 = input()
    
    if s2[0] == 'E': print('suricato')
    elif s2[0] == 'S': print('facochero')
    else: print('leao')
  except EOFError:
    break