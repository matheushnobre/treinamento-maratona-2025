# Solução em Python recebe TLE no caso de teste 66. 
# Havia feito em Python apenas para facilitar o entedimento de Trie. Após isso, converti para C++.

class NoTrie:
    def __init__(self, tam):
        self.filhos = [None] * 26
        self.answer = tam
    
def inserir(raiz, palavra):
    no = raiz
    for i in range(len(palavra)):
        c = palavra[i]
        index = ord(c) - ord('a')
        if no.filhos[index] is None:
            no.filhos[index] = NoTrie(len(palavra) - i - 1)
        else:
            no.filhos[index].answer = min(len(palavra)-i-1, no.filhos[index].answer)
        no = no.filhos[index]
        
def consultar(raiz, palavra):
    no = raiz
    for i in range(len(palavra)):
        c = palavra[i]
        index = ord(c) - ord('a')
        if no.filhos[index] is None:
            return -1
        no = no.filhos[index]
    return no.answer
        

if __name__ == '__main__':
    n, q = map(int, input().split())
    raiz = NoTrie(1000000)
    for _ in range(n):
        s = input()
        inserir(raiz, s)
    for _ in range(q):
        s = input()
        print(consultar(raiz, s))