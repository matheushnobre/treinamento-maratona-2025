#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

bool check(ll n, ll k, ll m, vector<ll>& a){
  ll temp = 0;
  for(int i=n/2; i<n; i++){
    temp += max(0LL, m-a[i]);
    if(temp > k) return false;
  }
  return true;
}

void solve(){
    ll n, k;
    cin>>n>>k;
    vector<ll> a(n);
    for(int i=0; i<n; i++) cin>>a[i];
    sort(a.begin(), a.end());
    
    ll ans=a[n/2], l=0, r=1e10;
    while(l <= r){
      ll m = (l+r)/2;
      if(check(n, k, m, a)) {
        l = m+1;
        ans = max(ans, m);
      }
      else r = m-1;
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