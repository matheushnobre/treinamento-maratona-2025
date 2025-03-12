#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve(){
    int n, x;
    cin>>n>>x;
    
    vector<ll> a(n), pref(n);
    map<ll, ll> mapa;
    ll ans = 0;
    
    for(int i=0; i<n; i++){
      cin>>a[i];
      if(i == 0) pref[i] = a[i];
      else pref[i] = pref[i-1] + a[i];
      
      if(pref[i] == x) ans++;
      ll aux = pref[i] - x;
      ans += mapa[aux];
      
      mapa[pref[i]] ++;      
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