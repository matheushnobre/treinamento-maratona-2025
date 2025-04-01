#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve(){
  int r, c;
  cin>>r>>c;
  vector<int> visitados(r+1);
  vector<vector<pair<int, int>>> graf(r+1);
  priority_queue<pair<int, int>> fila;

  int x, y, p;
  for(int i=0; i<c; i++){
    cin>>x>>y>>p;
    graf[x].push_back({y, p});
    graf[y].push_back({x, p});
    if(x == 1) fila.push({-p, y});
    else if(y == 1) fila.push({-p, x});
  }  
  
  visitados[1] = 1;
  ll ans = 0;
  while(!fila.empty()){
    pair<int, int> t = fila.top();
    fila.pop();
    y = t.second;
    p = -t.first;
    
    if(!visitados[y]){
      visitados[y] = 1;
      ans += p;
      for(pair<int, int> vz : graf[y]){
        fila.push({-vz.second, vz.first});
      }
    }
  }
  
  cout<<ans<<endl;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}