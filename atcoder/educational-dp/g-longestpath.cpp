#include <bits/stdc++.h>
using namespace std;

#define MAX 100010
typedef long long ll;
typedef vector<vector<int>> vii;

vii grafo(MAX);
vector<int> v(MAX);
vector<int> ans(MAX);

int bfs(int i){
  if(v[i]) return ans[i];
  v[i] = 1;
  ans[i] = 0;
  for(int vz : grafo[i]){
    ans[i] = max(ans[i], bfs(vz) + 1);
  }
  return ans[i];
}

void solve(){
    int n, m, saida=0;
    cin>>n>>m;
    for(int i=0; i<m; i++){
      int u, v;
      cin>>u>>v;
      grafo[u].push_back(v);
    }
    
    for(int i=1; i<=n; i++){
      if(!v[i]){
        ans[i] = bfs(i);
        v[i] = 1;
      }
      saida = max(saida, ans[i]);
    }
    
    cout<<saida<<endl;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t=1;
    //cin>>t;
    while(t--) solve();
    return 0;
}