#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int, ll> ii;
typedef vector<vector<ii>> vii;
typedef vector<int> vi;
ll ans = 1e19+10;

ll dfs(int o, int d, vii& graf, vi& visitados, ll saida){
  if(o == d){
    ans = min(ans, saida);
    return ans;
  }
  visitados[o] = 1;
  ll temp = saida;
  for(pair<int, ll> vz : graf[o]){
    if(!visitados[vz.first]){
      //cout<<"o = "<<o<<", vz = "<<vz.first<<endl;
      saida = temp ^ vz.second;
      dfs(vz.first, d, graf, visitados, saida);
      //cout<<"saida = "<<saida<<endl;
      
    }
  }
  visitados[o] = 0;
  return saida;
}

void solve(){
    int n, m;
    cin>>n>>m;
    vii graf(n);
    vi visitados(n);
    
    for(int i=0; i<m; i++){
      int u, v;
      ll w;
      cin>>u>>v>>w;
      graf[u-1].push_back({v-1, w});
      graf[v-1].push_back({u-1, w});
    }
    
    dfs(0, n-1, graf, visitados, 0);
    cout<<ans<<endl;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t=1;
   // cin>>t;
    while(t--) solve();
    return 0;
}