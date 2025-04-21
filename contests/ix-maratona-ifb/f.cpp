#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define MAX 310
vector<vector<int>> g(MAX);
vector<int> vis(MAX);

int dfs(int i, int c){
  if(vis[i]) return 0;
  vis[i] = c;
  for(int vz : g[i]) dfs(vz, c);
  return 1;
}

void solve(){
    int n, m, u, v;
    cin>>n>>m;
    
    for(int i=0; i<m; i++){
      cin>>u>>v;
      g[u].push_back(v);
      g[v].push_back(u);
    }
    
    int c=1;
    for(int i=1; i<=n; i++){
      if(!vis[i]){
        dfs(i, c);
        c++;
      }
    }
    
    int ans=0;
    for(int i=1; i<=c; i++){
      int v=0, a=0;
      
      for(int j=1; j<=n; j++){
        if(vis[j] == i) {
          v++;
          a += g[j].size();
        }
      }
      
      if(v - a/2 == 1) ans++;
    }
    
    cout<<ans<<endl;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t=1;
    //cin>>t;
    while(t--) solve();
    return 0;
}