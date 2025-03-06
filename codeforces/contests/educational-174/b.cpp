#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve(){
    int n, m;
    cin>>n>>m;
    
    int matriz[n+2][m+2];
    memset(matriz, 0, sizeof(matriz));
    for(int i=1; i<=n; i++){
      for(int j=1; j<=m; j++){
        cin>>matriz[i][j];
      }
    }
    
    int freq[n*m+1];
    memset(freq, 0, sizeof(freq));
    for(int i=1; i<=n; i++){
      for(int j=1; j<=m; j++){
        if(matriz[i][j] == matriz[i+1][j] || matriz[i][j] == matriz[i-1][j] || matriz[i][j] == matriz[i][j+1] || matriz[i][j] == matriz[i][j-1]){
          freq[matriz[i][j]] = 2;
        } {
          freq[matriz[i][j]] = max(freq[matriz[i][j]], 1);
        }
      }
    }
    
    int maximo=1, total=0;
    for(int i=0; i<n*m+1; i++){
      //cout<<i<<" "<<freq[i]<<endl;
      maximo = max(maximo, freq[i]);
      total += freq[i];
    }
    
    cout<<total-maximo<<endl;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t=1;
    cin>>t;
    while(t--) solve();
    return 0;
}