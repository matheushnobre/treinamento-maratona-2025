#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve(){
  ll n, k;
  cin>>n>>k;
  
  vector<ll> a(n), aux(31);
  
  for(int i=0; i<n; i++) {
    cin>>a[i];
    for(int j=0; j<31; j++){
      if(a[i] & (1<<j)){
        aux[j] += 1;
      }
    }
  }
  
  for(int i=30; i>=0; i--){
    int f = n - aux[i];
    if(f <= k){
      aux[i] = n;
      k -= f;
    }
  }
  
  ll ans = 0;
  for(int i=0; i<31; i++){
    if(aux[i] == n){
      ans = ans|(1<<i);
    }
  }
  
  cout<<ans<<endl;
    
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--) solve();
    return 0;
}