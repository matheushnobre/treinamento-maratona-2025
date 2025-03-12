#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve(){
    int n;
    cin>>n;
    vector<pair<int, int>> pacotes(n);
    for(int i=0; i<n; i++) cin>>pacotes[i].first>>pacotes[i].second;
    
    vector<vector<pair<int, int>>> mochila(n+1, vector<pair<int, int>>(51));
    for(int i=1; i<=n; i++){
      int qtd = pacotes[i-1].first, peso = pacotes[i-1].second;
      for(int j=1; j<=50; j++){
        if(j < peso){
          mochila[i][j] = mochila[i-1][j];
        } else{
          if(mochila[i-1][j-peso].first + qtd >= mochila[i-1][j].first){
            mochila[i][j].first = mochila[i-1][j-peso].first + qtd;
            mochila[i][j].second = mochila[i-1][j-peso].second + 1;
          } else{
            mochila[i][j] = mochila[i-1][j];
          }
        }
      }
    }
    
    int peso = 50;
    while(mochila[n][peso] == mochila[n][50]) peso--;
    
    cout<<mochila[n][50].first<<" brinquedos"<<endl<<"Peso: "<<peso+1<<" kg"<<endl;
    cout<<"sobra(m) "<<n-mochila[n][50].second<<" pacote(s)"<<endl<<endl;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--) solve();
    return 0;
}