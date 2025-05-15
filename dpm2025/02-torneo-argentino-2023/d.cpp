#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const int mod = 1e9+7;
const ll inf = 1e18+10;

bool check(ll m, vector<ll>& c, vector<ll>& p){
    vector<ll> prefix(c.size());
    prefix[0] = p[0];
    ll emp=0;
    for(int i=1; i<c.size(); i++) prefix[i] = prefix[i-1] + p[i];
    
   // cout<<"checkando pra m = "<<m<<endl;
    for(ll i=p.size()-1; i>=0; i--){
        ll falt = (c[i] * m);
       // cout<<"i = "<<i<<", prefix = "<<prefix[i]<<", falta = "<<falt<<endl;
        //cout<<"emp = "<<emp<<endl;
        
          //cout<<"prefix - emp - falt = "<<prefix[i]-emp-falt<<endl;
          if(prefix[i] - emp - falt < 0) return false;
          emp += falt;
          emp -= p[i];
          emp = max(0LL, emp);
      }

    return true;
}

void solve(){
    int n;
    cin>>n;
    vector<ll> c(n), p(n);

    for(int i=0; i<n; i++) cin>>c[i];
    for(int i=0; i<n; i++) cin>>p[i];

    ll ans=0, l=0, r=1e9+10;
    while(l <= r){
        ll m = (l+r)/2;
        //cout<<"l = "<<l<<", r = "<<r<<", m = "<<m<<endl;
        if(check(m, c, p)){
            ans = max(ans, m);
            l = m+1;
        } else{
            r = m-1;
        }
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