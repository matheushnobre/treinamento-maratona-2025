#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const ll inf = 1e20;
const int mod = 1e9+7;

int solve(){
    ll n, x;
    cin>>n>>x;
    
    //if(x % 2 == 0){
    //  for(int i=0; i<n-1; i++) cout<<0<<" ";
    //  cout<<x<<endl;
    //  return 0;
    //}
    
    //ll aux = log(x+1) / log(2);
    //if(pow(2, aux)-1 == x){
      //for(int i=0; i<min(n, x); i++) cout<<i<<" ";
      //for(int i=min(n, x); i<n; i++) cout<<x<<" ";
      //cout<<endl;
      //return 0;
    //}
    
    ll parou = 0;
    for(ll i=0; i<n-1; i++){
      parou++;
      bool imp=true;
      for(int v=0; v<=32; v++){
        if (i & (1 << v)){
          if (!(x & (1 << v))){
            imp=false;
          }
        }
      } 
      if(imp) cout<<i<<" ";
      else{
        parou--;
        break;
      }
    }
    
    if(parou == n-1){
      ll aux = 0;
      for(ll i=0; i<n-1; i++){
        aux = aux | i;
      }
      ll novo = aux | parou;
      if(novo == x) {
        cout<<parou<<endl;
        return 0;
      }
    }
    
    for(int i = parou; i<n; i++){
      cout<<x<<" ";
    } cout<<endl;
    
    return 0;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--) solve();
    return 0;
}