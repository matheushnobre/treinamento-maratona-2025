#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve(int n, int m){
    if(n == 0) return;
    vector<vector<pair<int, int>>> grafo(n);
    priority_queue<pair<int, int>> fila;
    
    for(int i=0; i<m; i++){
      int x, y, z;
      cin>>x>>y>>z;
      grafo[x].push_back({y, z});
      grafo[y].push_back({x, z});
      if(x == 0) fila.push({-z, y});
      else if(y == 0) fila.push({-z, x});
    }
    
    vector<int> vis(n);
    vis[0] = 1;
    int ans = 0;
    while(!fila.empty()){
      int v = fila.top().second, d = -fila.top().first;
      fila.pop();
      
      if(vis[v]) continue;
      else{
        vis[v] = 1;
        ans += d;
        for(pair<int, int> vz : grafo[v]){
          fila.push({-vz.second, vz.first});
        }
      }
    }
    
    cout<<ans<<endl;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, m;
    while(cin>>n>>m) solve(n, m);
    return 0;
}