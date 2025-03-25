def check(v, m, c, d, n):
  temp = 0 
  for i in range(min(n, m+1)):
    temp += (d//(m+1)) * v[i]
    if d % (m+1) > i: temp += v[i]
    if temp >= c: return True
  return False

def solve():
  n, c, d = map(int, input().split())
  v = list(map(int, input().split()))
  v.sort(reverse=True)
  ans = 0
  if(d * v[0] < c):
    print('Impossible')
    return
  
  l = 0
  r = 10**9
  while(l <= r):
    m = (l+r)//2
    if(m > 500000000):
      print('Infinity')
      return
    if(check(v, m, c, d, n)):
      ans = max(ans, m)
      l = m+1 
    else:
      r = m-1
    
  print(ans)

t = int(input())
for _ in range(t):
  solve()