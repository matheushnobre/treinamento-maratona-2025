#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
int calculado[12][12] = {0};
int resultado[12][12] = {0};

int aux(int i, int j){
  //cout<<i<<" "<<j<<endl;
  if(i > 10 || j > 10) return 0;
  if(calculado[i][j]) return resultado[i][j];
  resultado[i][j] = aux(i+1, j) + aux(i, j+1);
  calculado[i][j] = 1;
  return resultado[i][j];
}

void solve(){
  memset(calculado, 0, sizeof(calculado));
  memset(resultado, 0, sizeof(resultado));
  int n, m, x, y;
  cin>>n>>m>>x>>y;
  calculado[x][y] = 1;
  calculado[n][m] = 1;
  resultado[x][y] = 0;
  resultado[n][m] = 1;
  cout<<aux(1, 1)<<endl;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--) solve();
    return 0;
}