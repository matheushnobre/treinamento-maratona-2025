#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve(){
    int n, q;
    cin>>n>>q;
    vector<ll> a(n+1), p(n+1);
    
    for(int i=1; i<=n; i++){
      cin>>a[i];
      p[i] = p[i-1] + a[i];
    }
    
    int l, r, k;
    while(q--){
      cin>>l>>r>>k;
      ll aux = p[l-1];
      aux += (l-r+1) * k;
      aux += p[n] - p[r];
      
      if(aux % 2 == 0) cout<<"NO\n";
      else cout<<"YES\n";
    }
  
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--) solve();
    return 0;
}