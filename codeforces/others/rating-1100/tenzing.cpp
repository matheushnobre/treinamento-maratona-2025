#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve(){
    int n, x; 
    cin>>n>>x;
    int books[3][n];
    for(int i=0; i<3; i++)
      for(int j=0; j<n; j++)
        cin>>books[i][j];
        
    int aux = 0;
    for(int i=0; i<3; i++){
      for(int j=0; j<n; j++){
        int liv = books[i][j];
        bool parar=false;
        for(int p=0; p<32; p++){
          if((liv & (1<<p)) && !(x & (1<<p))){
            parar = true;
          }
        }
        if(parar) break;
        else aux = aux | liv;
      }
    }
    if(aux == x) cout<<"Yes\n";
    else cout<<"No\n";
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--) solve();
    return 0;
}