#include <bits/stdc++.h>
using namespace std;

#define MAX 3010
typedef long long ll;
int n, m;
vector<vector<int>> grafo(MAX);

void dfs(int i, vector<int>& vis, vector<int>& vert){
    if(vis[i] || !vert[i]) return;
    vis[i] = 1;
    for(int j : grafo[i])
        dfs(j, vis, vert);
}

void solve(){
    cin>>n>>m;

    for(int i=0; i<m; i++){
        int u, v;
        cin>>u>>v;
        grafo[u].push_back(v);
        grafo[v].push_back(u);
    }

    vector<int> vert(n+1, 1);

    int first = 1;
    for(int i=0; i<n; i++){
        vector<int> vis(n+1, 0);
        dfs(first, vis, vert);

        string ans = "YES";
        for(int i=1; i<=n; i++){
            if(vert[i] && !vis[i]) ans="NO";
        }

        cout<<ans<<endl;

        int v;
        cin>>v;
        vert[v] = 0;
        for(int i=first; i<=n; i++)
            if(vert[i]){
                first = i;
                break;
            }
    }
    
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    freopen("closing.in", "r", stdin);
    freopen("closing.out", "w", stdout);
    solve();
    return 0;
}