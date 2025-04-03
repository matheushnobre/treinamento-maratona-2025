#include <bits/stdc++.h>
using namespace std;

int dfs(int i, vector<map<int, int>>& grafo, vector<int>& vis){
    if(vis[i] == 1) return 1;
    if(vis[i] == 2) return 0;
    vis[i] = 1;
    for(auto aux : grafo[i]){
        if(dfs(aux.first, grafo, vis)) return 1;
    }
    vis[i] = 2;
    return 0;
}

void solve(){
    int n, m, a, b;
    cin>>n>>m;
    vector<map<int, int>> grafo(n+1);

    for(int i=0; i<m; i++){
        cin>>a>>b;
        grafo[a][b] = 1;
    }

    vector<int> vis(n+1, 0);
    bool ans=false;
    int nesta = 1;
    for(int i=1; i<=n; i++){
        if(!vis[i]){
            bool aux = dfs(i, grafo, vis);
            if(aux){
                cout<<"SIM"<<endl;
                return;
            }
        }
    }

    cout<<"NAO"<<endl;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--) solve();
    return 0;
}