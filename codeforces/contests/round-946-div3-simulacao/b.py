t = int(input())
for _ in range(t):
  n = int(input())
  s = input()
  
  ss = list(set(s))
  ss.sort()
  
  freq = {}
  i = 0
  j = len(ss) - 1 
  while i < len(ss):
    freq[ss[i]] = ss[j]    
    i+=1 
    j-=1
  
  pal = ''
  for c in s:
    pal += freq[c]
  print(pal)