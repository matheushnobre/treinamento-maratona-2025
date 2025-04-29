#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
int m, n;
vector<vector<char>> mapa(110, vector<char>(110));
vector<vector<int>> vis(110, vector<int>(110));

int dfs(int i, int j, int dx, int dy){
  if(i >= n || i < 0 || j >= m || j < 0) return 0;
  if(mapa[i][j] == '*') return 1;
  if(vis[i][j]) return 0;
  
  vis[i][j] = 1;
  
  if(mapa[i][j] == '>') return dfs(i, j+1, 0, 1);
  else if(mapa[i][j] == '<') return dfs(i, j-1, 0, -1);
  else if(mapa[i][j] == '^') return dfs(i-1, j, -1, 0);
  else if(mapa[i][j] == 'v') return dfs(i+1, j, 1, 0);
  
  return dfs(i+dx, j+dy, dx, dy);
}

void solve(){
    cin>>m>>n;
    for(int i=0; i<n; i++)
      for(int j=0; j<m; j++)
        cin>>mapa[i][j];
        
    if(dfs(0, 0, 0, 0)) cout<<"*"<<endl;
    else cout<<"!"<<endl;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}