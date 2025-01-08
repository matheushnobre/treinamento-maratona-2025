// Dijkstra

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<ll, ll> pll;
typedef vector<pll> vll;
typedef vector<ll> vl;
const ll inf = 1e18+10;

vl dijkstra(vector<vll>& grafo, int n){
    vl distancias(n+1, inf);
    vector<bool> visitados(n+1);
    distancias[1] = 0;
    priority_queue<pll, vector<pll>, greater<pll>> fila;
    fila.push({0, 1});

    while(!fila.empty()){
        ll v_atual = fila.top().second;
        fila.pop();

        if(visitados[v_atual]) continue;
        visitados[v_atual] = true;

        for(auto v : grafo[v_atual]){
            ll vz = v.first, peso = v.second;
            if(distancias[vz] > distancias[v_atual] + peso){
                distancias[vz] = distancias[v_atual] + peso;
                fila.push({distancias[vz], vz});
            }
        }
    }
    
    return distancias;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    ll n, m, a, b, c;
    cin>>n>>m;
    vector<vll> grafo(n+1);

    while(m--){
        cin>>a>>b>>c;
        grafo[a].push_back({b, c});
    }

    vl answer = dijkstra(grafo, n);
    for(int i=1; i<=n; i++) cout<<answer[i]<<" ";

    return 0;
}