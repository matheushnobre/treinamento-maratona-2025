#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve(){
    ll n, m;
    cin>>n>>m;
    vector<ll> b(n), w(m);
    for(int i=0; i<n; i++) cin>>b[i];
    for(int j=0; j<m; j++) cin>>w[j];
    
    sort(b.rbegin(), b.rend());
    sort(w.rbegin(), w.rend());
    
    ll auxb=0, auxw=0, temp=0, ans=0;
    while(auxb < n && b[auxb] >= 0){
      temp += b[auxb];
      auxb++;
    }
    
    while(auxw < m && w[auxw] >= 0 && auxw < auxb){
      temp += w[auxw];
      auxw++;
    }
    
    ans = temp;
    if(auxb == auxw){
      while(auxb < n && auxw < m){
        temp += b[auxb] + w[auxw];
        ans = max(ans, temp);
        auxb++;
        auxw++;
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