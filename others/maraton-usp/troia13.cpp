#include <bits/stdc++.h>
using namespace std;

#define MAXN 50010
vector<vector<int>> grafo(MAXN);
vector<int> visitados(MAXN);

void dfs(int i){
    if(visitados[i]) return;
    visitados[i] = 1;
    for(int vz : grafo[i])
        dfs(vz);
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, m;
    cin>>n>>m;
    for(int i=0; i<m; i++){
        int a, b;
        cin>>a>>b;
        grafo[a].push_back(b);
        grafo[b].push_back(a);
    }

    int familias = 0;
    for(int i=1; i<=n; i++){
        if(!visitados[i]){
            familias++;
            dfs(i);
        }
    }

    cout<<familias<<endl;
    return 0;
}