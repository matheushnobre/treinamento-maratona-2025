#include <bits/stdc++.h>
using namespace std;

#define MAXN 100010

vector<vector<int>> grafo(MAXN);
vector<int> visitados(MAXN, 0);

void dfs(int n, int x){
    visitados[x] = 1;
     for(int vz : grafo[x])
        if(visitados[vz] == 0)
            dfs(n, vz);
}

int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    int n, m, a,b;
    cin>>n>>m;
    while(m--){
        cin>>a>>b;
        grafo[a].push_back(b);
        grafo[b].push_back(a);
    }
    vector<pair<int, int>> estradas;
    dfs(n, 1);
    for(int i=2; i<=n; i++){
        if(visitados[i] == 0){
            estradas.push_back({i, i-1});
            dfs(n, i);
        }
    }
    cout<<estradas.size()<<endl;
    for(pair<int, int> e : estradas){
        cout<<e.first<<" "<<e.second<<endl;
    }
    return 0;
}