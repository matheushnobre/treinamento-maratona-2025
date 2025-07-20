import heapq

class UnionFind:
    def __init__(self, n):
        self.pai = [i for i in range(n+1)]
        self.rank = [0] * (n+1)
    
    def find(self, x):
        if self.pai[x] == x: return x 
        self.pai[x] = self.find(self.pai[x])
        return self.pai[x]

    def union(self, x, y):
        a = self.find(x)
        b = self.find(y)
        
        if a == b: return False
        if self.rank[a] == self.rank[b]:
            self.pai[b] = a
            self.rank[a] += 1 
        elif self.rank[a] < self.rank[b]:
            self.pai[a] = b 
        else:
            self.pai[b] = a

        return True

teste = 1
while True:
    try:
        n, m = map(int, input().split())
        if n == 0: break
    except: break
    
    fila = []
    for i in range(m):
        x, y, z = map(int, input().split())
        heapq.heappush(fila, ((z, x, y)))
    
    
    print(f'teste {teste}')
    u = UnionFind(n)
    while fila:
        peso, x, y = heapq.heappop(fila)
        if u.union(x, y):
            print(min(x, y), max(x, y))
                
    teste += 1
    print()