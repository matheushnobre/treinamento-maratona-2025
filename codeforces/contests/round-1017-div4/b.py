for _ in range(int(input())):
  n, m, l, r = map(int, input().split())
  d = min(r, m)
  e = 0 - (m-d)
  print(e, d)