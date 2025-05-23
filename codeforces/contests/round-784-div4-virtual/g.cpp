#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve(){
    int n, m;
    cin>>n>>m;
    
    char mapa[n][m];
    for(int i=0; i<n; i++)
      for(int j=0; j<m; j++)
        cin>>mapa[i][j];
        
    char ans[n][m];
    for(int i=n-1; i>=0; i--){
      for(int j=m-1; j>=0; j--){
        ans[i][j] = '.';
        if(mapa[i][j] == 'o' || mapa[i][j] == '*'){
          ans[i][j] = mapa[i][j];
        } else{
          for(int k=i-1; k>=0; k--){
            if(mapa[k][j] == 'o') break;
            else if(mapa[k][j] == '*'){
              ans[i][j] = '*';
              mapa[k][j] = '.';
              break;
            }
          }
        }
      }
    }
    
    for(int i=0; i<n; i++){
      for(int j=0; j<m; j++){
        cout<<ans[i][j];
      } cout<<endl;
    }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--) solve();
    return 0;
}