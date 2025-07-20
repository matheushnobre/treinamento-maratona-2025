o = "tamocompetindo"
k = int(input())
s = input()

ans = 'NAO'
for i in range(len(s)-13):
    aux = s[i:i+14]
    c = 0
    
    for j in range(14):
        if aux[j] != o[j]:
            c += 1
    
    if c <= k: ans = 'SIM'

print(ans)