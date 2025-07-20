s = input()

pilha = []
ans = len(s)

for i in s:
    if i == 'B':
        if pilha and pilha[-1] == 'A':
            ans -= 2
            pilha.pop()
        else:
            pilha.append('B')
    else:
        pilha.append('A')
    
print(ans)    