#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const ll INF = 1e18;

void solve(){
    ll n, t;
    cin>>n>>t;
    vector<ll> v(n);
    for(int i=0; i<n; i++) 
        cin>>v[i];

    ll l = 1, r = INF, ans = INF;
    while(l<=r){
        ll m = (l+r)/2;
        ll prod = 0;
        for(int i=0; i<n; i++){
            prod += m / v[i];
            if(prod >= t) break;
        }

        if(prod >= t){
            ans = min(ans, m);
            r = m-1;
        } else{
            l = m+1;
        }
    }

    cout<<ans<<endl;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}