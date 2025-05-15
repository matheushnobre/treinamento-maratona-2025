#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const int mod = 1e9+7;
const ll inf = 1e18+100;

void solve(){
  int n, m, p, q;
  cin>>n>>m>>p>>q;
  
  int aux = n/p;
  int saux = aux*q;
  
  if(n % p == 0){
    if(saux == m) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
  } else{
    cout<<"saux = "<<saux<<endl;
    cout<<"saux - m = "<<abs(saux-m)<<", q = "<<q<<endl;
    if(abs(saux - m) <= q) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
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