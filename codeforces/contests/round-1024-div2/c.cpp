#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const int mod = 1e9+7;
const ll inf = 1e18+100;

void solve(){
  int n; cin>>n;
  
  if(n == 1){
    cout<<0<<endl;
    return;
  }
  
  int matriz[n+2][n+2];
  memset(matriz, -1, sizeof(matriz));
  
  int i=n/2, j=n/2;
  if(n%2==0){
    i--;
    j--;
  }
  i++;
  j++;
  
  matriz[i][j] = 0;
  matriz[i][j+1] = 1;
  matriz[i+1][j+1] = 2;
  matriz[i+1][j] = 3;
  
  i=i+1;
  j=j-1;
  
  int dir=1;
  int cont=4;
  
  while(cont != (n*n)){
    matriz[i][j] = cont;
    cont++;
    if(dir == 1){
      if(matriz[i][j+1] != -1){
        i--;
      } else{
        j++;
        dir = 2;
      }
    } else if(dir == 2){
      if(matriz[i+1][j] != -1){
        j++;
      } else{
        i++;
        dir = 3;
      }
    } else if(dir == 3){
      if(matriz[i][j-1] != -1){
        i++;
      } else{
        j--;
        dir = 4;
      }
    } else if(dir == 4){
      if(matriz[i-1][j] != -1){
        j--;
      } else{
        i--;
        dir = 1;
      }
    }
  }
  
  
  for(int i=1; i<=n; i++){
    for(int j=1; j<=n; j++){
      cout<<matriz[i][j]<<" ";
    } cout<<endl;
  }
   
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t=1;
    cin>>t;
    while(t--) solve();
    return 0;
}