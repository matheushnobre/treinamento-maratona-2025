#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define MAX 200010
vector<vector<int>> graf(MAX);
vector<int> visitados(MAX);

int dfs(int i){
  if(visitados[i]) return 1;
  visitados[i] = true;
  int r = 1;
  for(int v : graf[i]){
    r = min(r, dfs(v));
  }
  if(graf[i].size() != 2) return 0;
  return r;
}

void solve(){
    int n, m, ans=0;
    cin>>n>>m;
    for(int i=0; i<m; i++){
      int u, v;
      cin>>u>>v;
      graf[u].push_back(v);
      graf[v].push_back(u);
    }
    
    for(int i=1; i<n; i++){
      if(!visitados[i]){
          ans+=dfs(i);
      } 
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