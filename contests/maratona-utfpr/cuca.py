string = input()
pref = {}
suf = {}

for i in range(1, len(string)):
    suf[string[:-i]] = 0
    pref[string[-i:]] = 0

n = int(input())
for _ in range(n):
    nome = input()
    for i in range(len(nome)):
        try:
            suf[nome[-i:]] += 1
        except:
            pass
        
n = int(input())
for _ in range(n):
    nome = input()
    try:
        pref[nome] += 1
    except:
        pass
    for i in range(1, len(nome)):
        try:
            pref[nome[:-i]] += 1
        except:
            pass
   
answer = 0     
aux = []
for v in pref.values():
    aux.append(v)

i=0
for v in suf.values():
    answer += (aux[i] * v)
    i+=1

print(answer)