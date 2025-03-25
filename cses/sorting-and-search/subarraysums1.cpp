#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve(){
    int n, x, a, ans=0;
    cin>>n>>x;
    ll soma=0;
    map<ll, ll> aux;
    
    for(int i=0; i<n; i++){
      cin>>a;
      soma += a;
      if(soma == x) ans++;
      if(soma >= x)
        ans += aux[soma-x];
      aux[soma]++;
    }
    
    cout<<ans<<endl;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t=1;
    //cin>>t;
    while(t--) solve();
    return 0;
}