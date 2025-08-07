#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define MAXN 2510
const ll INF = 1e18;

struct Aresta{
    ll a, b, peso;
};

int n, m;
vector<Aresta> arestas;
vector<int> v1(MAXN, 0), v2(MAXN, 0);

void dfs1(int x){
    if(v1[x]) return;
    v1[x] = 1;

    for(Aresta ar : arestas){
        if(ar.a == x) dfs1(ar.b);
    }
}

void dfs2(int x){
    if(v2[x]) return;
    v2[x] = 1;

    for(Aresta ar : arestas){
        if(ar.b == x) dfs2(ar.a);
    }
}

ll bf(int orig, int dest){
    vector<ll> d(n+1, -INF);
    d[orig] = 0LL;

    for(int i=0; i<n-1; i++){
        for(Aresta a : arestas){
            if (d[a.a] != -INF && d[a.a] + a.peso > d[a.b]) {
                d[a.b] = d[a.a] + a.peso;
            }
        }
    }

    // caso de ciclo
    for(Aresta a : arestas){
        if (d[a.a] != -INF && d[a.a] + a.peso > d[a.b]) {
            d[a.b] = d[a.a] + a.peso;
            if (v1[a.a] && v2[a.a]) return -1;
        }
    }

    return d[dest];
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    // Leitura das arestas do grafo
    cin>>n>>m;
    for(int i=0; i<m; i++){
        Aresta ar;
        cin>>ar.a>>ar.b>>ar.peso;
        arestas.push_back(ar);
    }

    dfs1(1);
    dfs2(n);
    cout<<bf(1, n);
}