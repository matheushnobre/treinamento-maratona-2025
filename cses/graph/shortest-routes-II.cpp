// Floyd-Warshall

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const ll inf = 1e18+10;
const int maxn = 510;
typedef vector<vector<pair<int, ll>>> graf;
ll distancias[maxn][maxn];

void floyd(graf& grafo, int n){
    for(int i=0; i<=n+1; i++)
        for(int j=0; j<=n+1; j++)
            distancias[i][j] = inf;

    for(int i=1; i<=n; i++){
        distancias[i][i] = 0;
        for(auto v : grafo[i]){
            distancias[i][v.first] = min(distancias[i][v.first], v.second); // Pode haver mais de uma rodovia entre as mesmas cidades, porém com tamanhos diferentes
        }
    }

    for(int k=1; k<=n; k++){
        for(int i=1; i<=n; i++){
            for(int j=1; j<=n; j++){
                distancias[i][j] = min(distancias[i][k] + distancias[k][j], distancias[i][j]);
            }
        }
    }
}

int main(){
    int n, m, q, a, b;
    ll c;

    cin>>n>>m>>q;
    graf grafo(n+1);
    while(m--){
        cin>>a>>b>>c;
        grafo[a].push_back({b, c});
        grafo[b].push_back({a, c});
   }

    floyd(grafo, n);

    while(q--){
        cin>>a>>b;
        ll answer = distancias[a][b];
        if (answer == inf) cout<<-1<<endl;
        else cout<<answer<<endl;
    }

    return 0;
}