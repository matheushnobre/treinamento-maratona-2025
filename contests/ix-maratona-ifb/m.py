for _ in range(int(input())):
  n = int(input())
  m = list(map(int, input().split()))
  pref = [m[0]] * n 
  for i in range(1, n):
    pref[i] = pref[i-1] + m[i]
  
  ans = False
  for i in range(1, n-1):
    if pref[i-1] == pref[n-1] - pref[i]:
      print(i+1)
      ans = True
      break 
    
  if not ans: print('A cadeira, usa a cadeira!')