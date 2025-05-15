def calcular(v):
    m, s, ms = v.split(':')
    m, s, ms = int(m), int(s), int(ms)
    t = ms + 1000 * s + m * 60 * 1000
    return t

n, v = map(int, input().split())

pilotos = []
mv = 1e18

for _ in range(n):
    p, *v = input().split()
    v = [calcular(t) for t in v]
    total = sum(v)
    pilotos.append((total, p, v))
    for t in v:
        mv = min(t, mv)

pilotos.sort()

pcmv = []
for i in range(n):
    p = pilotos[i]
    total = 0
    for j in p[2]:
        if j == mv:
            pcmv.append((total, p[1], i+1))
            break
        else:
            total += j

pcmv.sort()
if pcmv[0][2] <= 10:
    print(pcmv[0][1])
else:
    print('NENHUM')
