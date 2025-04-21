#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
vector<string> cows = {"Bessie", "Buttercup", "Belinda", "Beatrice", "Bella", "Blue", "Betsy", "Sue"};
map<string, int> idx;
vector<vector<int>> grafo(8);
vector<int> visitados(8);
    
void busca(int i){
  if(visitados[i]) return;
  visitados[i] = 1;
  
  cout<<cows[i]<<endl;
  for(int vz : grafo[i]) busca(vz);
}

void solve(){
    int n;
    string v1, en, v2;
    cin>>n;
    for(int i=0; i<n; i++){
      cin>>v1>>en>>en>>en>>en>>v2;
      grafo[idx[v1]].push_back(idx[v2]);
      grafo[idx[v2]].push_back(idx[v1]);
    }
    
    vector<vector<string>> saida;
    
    for(int i=0; i<8; i++){
      if(visitados[i]) continue;
      if(grafo[i].size()<2) busca(i);
    }
    
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    freopen("lineup.in", "r", stdin);
    freopen("lineup.out", "w", stdout);
    sort(cows.begin(), cows.end());
    for(int i=0; i<8; i++) idx[cows[i]] = i;
    solve();
    return 0;
}