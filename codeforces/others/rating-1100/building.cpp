#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int solve(){
    int n;
    ll x;
    cin>>n>>x;
    vector<ll> a(n);
    for(int i=0; i<n; i++) cin>>a[i];
    sort(a.begin(), a.end());

    ll t=0;
    for(int i=1; i<n; i++){
        if (t + (i * (a[i]-a[i-1])) <= x)
            t += (i * (a[i]-a[i-1]));
        else{
            ll falta = x - t;
            ll ans = a[i-1] + (falta / i) ;
            cout<<ans<<endl;
            return 0;
        }
    }

    ll falta = x - t;
    ll ans = a[n-1] + (falta / n);
    cout<<ans<<endl;

    return 0;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--)
        solve();
    return 0;
}