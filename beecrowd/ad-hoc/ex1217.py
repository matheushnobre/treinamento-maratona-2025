n = int(input())

pt = 0
kt = 0

for i in range(n):
    pt += float(input())
    k = len(input().split())
    kt += k 
    print(f'day {i+1}: {k} kg')

mp = pt / n
mk = kt / n 
print(f'{mk:.2f} kg by day') 
print(f'R$ {mp:.2f} by day')