letras = 'abcdefghijklmnopqrstuvwxyz'

l = letras[::-1]
palavra = input()

nova = ''
for c in palavra:
    nova += l[letras.index(c)]
ans = 0
for c in nova:
    ans += letras.index(c)+1

print(ans)