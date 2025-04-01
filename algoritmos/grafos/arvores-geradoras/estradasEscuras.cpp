#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve(int n, int m){
    if(n == 0) return;
    ll total = 0, gm=0;
    vector<int> visitados(n);
    vector<vector<pair<int, int>>> grafo(n);
    priority_queue<tuple<int, int, int>> fila;
    
    int x, y, z;
    for(int i=0; i<m; i++){
      cin>>x>>y>>z;
      grafo[x].push_back({y, z});
      grafo[y].push_back({x, z});
      total += z;
      if(x == 0) fila.push({-z, x, y});
      else if(y == 0) fila.push({-z, y, x});
    }
    
    visitados[0] = 1;
    int atual = 0;
    while(!fila.empty()){
      tuple<int, int, int> proximo = fila.top();
      fila.pop();
      z = -get<0>(proximo);
      x = get<1>(proximo);
      y = get<2>(proximo);
      
      if(!visitados[y]){
        visitados[y] = 1;
        gm += z;
        for(pair<int, int> vz : grafo[y]){
          fila.push({-vz.second, y, vz.first});
        }
      }
    }
    
    cout<<total-gm<<endl;

}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, m;
    while(cin>>n>>m) solve(n, m);
    return 0;
}