#include <bits/stdc++.h>

using namespace std;

void bfs(vector<vector<int>>& grafo, int o, int d, int n){
    vector<int> visitados(n+1), origem(n+1);
    queue<int> fila;

    visitados[o] = 1;
    fila.push(o);

    while(!fila.empty()){
        int vatual = fila.front();
        fila.pop();
        for(int vz : grafo[vatual]){
            if(!visitados[vz]){
                visitados[vz] = true;
                origem[vz] = vatual;
                fila.push(vz);
            }
        }
    }

    vector<int> ans;
    if(!visitados[n]){
        cout<<"IMPOSSIBLE";
        return;
    } else{
        int atual = n;
        while(atual != 1){
            ans.push_back(atual);
            atual = origem[atual];
        }
        ans.push_back(1);
        cout<<ans.size()<<endl;
        for(int i=ans.size()-1; i>=0; i--) cout<<ans[i]<<" ";
    }
}

void solve(){
    int n, m;
    cin>>n>>m;
    vector<vector<int>> grafo(n+1);

    for(int i=0; i<m; i++){
        int u, v;
        cin>>u>>v;
        grafo[u].push_back(v);
        grafo[v].push_back(u);
    }

    bfs(grafo, 1, n, n);
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}