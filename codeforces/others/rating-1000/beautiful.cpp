#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve(){
    ll n, k, b, s;
    cin>>n>>k>>b>>s;
   // cout<<"n = "<<n<<", k = "<<k<<", b= "<<b<<", s="<<s<<endl;
    // a1/k + a2/k + a3/k + ... + an/k = b 
    // a1 + a2 + a3 + ... + an = s 
    
    vector<ll> ans(n);
    ans[0] = b * k;
    //cout<<"ans[0] = "<<ans[0]<<endl;
    ll rest = s - ans[0];
    
    if(rest < 0){
      cout<<-1<<endl;
      return;
    }
    
    for(int i=0; i<n; i++){
      ans[i] += min(rest, k-1);
      rest = max(0LL, rest-(k-1));
    }
    
    if(rest > 0){
      cout<<-1<<endl;
      return;
    }
    
    for(ll i : ans) cout<<i<<" ";
    cout<<endl;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--) solve();
    return 0;
}