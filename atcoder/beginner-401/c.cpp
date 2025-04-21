#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const int mod = 1e9;

void solve(){
    ll n, k;
    cin>>n>>k;
    vector<ll> a(n+1, 1);
    
    ll soma = k;
    for(int i=k; i<=n; i++){
      a[i] = soma;
      soma = soma - a[i-k];
      if(soma < 0) soma = mod - abs(soma);
      soma += a[i];
      soma %= mod;
    }
    
    cout<<a[n]<<endl;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t=1;
    //cin>>t;
    while(t--) solve();
    return 0;
}