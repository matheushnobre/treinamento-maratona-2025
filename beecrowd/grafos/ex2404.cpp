#include <bits/stdc++.h>
using namespace std;

typedef pair<int, int> pii;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, m;
    cin>>n>>m;

    vector<vector<pii>> grafo(n+1);
    for(int i=0; i<m; i++){
        int u, v, c;
        cin>>u>>v>>c;
        grafo[u].push_back({v, c});
        grafo[v].push_back({u, c});
    }

    priority_queue<pii, vector<pii>, greater<pii>> fila;
    vector<int> visitados(n+1);
    fila.push({0, 1});

    int ans = 0;
    while(!fila.empty()){
        pii aux = fila.top();
        fila.pop();

        int dist = aux.first, vatual = aux.second;
        if(visitados[vatual]) continue;

        visitados[vatual] = 1;
        ans += dist;
        for(auto& v : grafo[vatual])
            fila.push({v.second, v.first});
        
    }

    cout<<ans<<endl;

    return 0;
}