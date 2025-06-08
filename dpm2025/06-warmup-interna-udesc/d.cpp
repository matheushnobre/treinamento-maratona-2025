#include <bits/stdc++.h>
using namespace std;

#define MAX 1010
vector<vector<int>> grafo(MAX);
vector<int> visitados(MAX);

int dfs(int l, int e, int s){
    visitados[l] = 1;
    if(l == e) return 1;
    int ans = 0;
    for(int vz : grafo[l]){
        if(vz == s) continue;
        if(!visitados[vz]) ans = max(ans, dfs(vz, e, s));
    }
    return ans;
}

void solve(){
    int n, q;
    cin>>n>>q;

    for(int i=0; i<n-1; i++){
        int u, v;
        cin>>u>>v;
        grafo[u].push_back(v);
        grafo[v].push_back(u);
    }

    for(int i=0; i<q; i++){
        int l, e, s;
        cin>>l>>e>>s;
        for(int j=0; j<=n; j++) visitados[j] = 0;
        if(dfs(l, e, s)) cout<<"SIM"<<endl;
        else cout<<"NAO"<<endl;
    }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}