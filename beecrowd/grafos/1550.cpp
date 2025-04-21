#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int inverter(int n){
  int saida = 0;
  while(n != 0){
    saida *= 10;
    saida += n % 10;
    n /= 10;
  }
  return saida;
}

void solve(){
    int a, b;
    cin>>a>>b;
    vector<int> vis(10000);
    vector<int> ans(10000);
    
    queue<int> fila;
    fila.push(a);
    while(!fila.empty()){
      int v = fila.front();
      fila.pop();

      int vl = inverter(v);
      if(!vis[v+1]) {
        ans[v+1] = ans[v]+1;
        fila.push(v+1);
        vis[v+1] = 1;
      }
      
      if(!vis[vl]){
        ans[vl] = ans[v] + 1;
        fila.push(vl);
        vis[vl] = 1;
      }
    }
    
    cout<<ans[b]<<endl;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--) solve();
    return 0;
}