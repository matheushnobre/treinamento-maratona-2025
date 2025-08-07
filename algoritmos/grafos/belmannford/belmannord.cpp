#include <bits/stdc++.h>
using namespace std;

#define MAX 2510
typedef long long ll;
const ll INF = 1e18;

struct Aresta{
    int a, b, x;
};

int n, m;
vector<Aresta> grafo;

ll belmmanford(int origem, int destino){
    vector<ll> dist(n+1, INF);
    dist[origem] = 0;

    for(int i=0; i<n-1; i++){
        for(Aresta aresta : grafo){
            int o = aresta.a;
            int d = aresta.b;
            int peso = aresta.x;

            if(dist[o] != INF && dist[o] + peso < dist[d]){
                dist[d] = dist[o] + peso;
            }
        }
    }

    // Em caso de ciclo negativo que afeta a resposta
    for(Aresta aresta : grafo){
        int o = aresta.a;
        int d = aresta.b;
        int peso = aresta.x;

        if(dist[o] != INF && dist[o] + peso < dist[d]){
            return -1;
        }
    }

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
    cout<<belmmanford(1, n)<<endl;
}