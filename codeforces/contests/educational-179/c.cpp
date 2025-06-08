#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const ll inf = 1e18+10;
const int mod = 1e9+7;

void solve(){
    int n;
    ll ans = inf;
    cin>>n;
    vector<ll> a(n);

    for(int i=0; i<n; i++)
        cin>>a[i];
    
    ll e=0, d=0;
    ans = a[0] * (n-1);
    for(int i=1; i<n; i++){
        if(a[i] == a[i-1]) d++;
        else{
            e=i;
            d=i;
        }

        ll aux = n - (d-e+1);
        ans = min(ans, a[i] * aux);
    }

    cout<<ans<<endl;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t=1;
    cin>>t;
    while(t--) solve();
    return 0;
}