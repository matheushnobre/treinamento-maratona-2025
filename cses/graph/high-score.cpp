// Belmann Ford adaptado para pegar a maior distância.

#include <bits/stdc++.h>
using namespace std;

#define MAX 2510
#define INF -1e18
typedef long long ll;

struct Aresta{
    int a, b, x;
};

int n, m;
vector<Aresta> grafo;

vector<int> p1(MAX, 0);
vector<int> p2(MAX, 0);

int dfs1(int x){
    if(p1[x]) return 1;
    p1[x] = 1;

    for(Aresta aresta : grafo){
        if(aresta.a == x) dfs1(aresta.b);
    }
    return 0;
}

int dfs2(int x){
    if(p2[x]) return 1;
    p2[x] = 1;

    for(Aresta aresta : grafo){
        if(aresta.b == x) dfs2(aresta.a);
    }
    return 0;
}

ll belmmanford(int origem, int destino){
    vector<ll> dist(n+1, INF);
    dist[origem] = 0;

    int x = -1;
    for(int i=0; i<=n; i++){
        x = -1;
        for(Aresta aresta : grafo){
            int o = aresta.a;
            int d = aresta.b;
            int peso = aresta.x;

            if(dist[o] != -INF && dist[o] + peso > dist[d]){
                dist[d] = dist[o] + peso;
                if(p1[o] && p2[o]) x = 1;
            }
        }
    }

    // Em caso de ciclo positivo que afeta a resposta
    if(x == 1) return -1;

    return dist[destino];
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin>>n>>m;

    for(int i=0; i<m; i++){
        Aresta aresta;
        cin>>aresta.a>>aresta.b>>aresta.x;

        grafo.push_back(aresta);
    }

    dfs1(1);
    dfs2(n);
    cout<<belmmanford(1, n)<<endl;
}