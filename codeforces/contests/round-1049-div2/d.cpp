#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve(){
    int n;
    cin>>n;
    vector<ll> a(n+1);
    vector<ll> dp(n+1);

    for(int i=1; i<=n; i++) cin>>a[i];
    dp[1] = 1;
    
    ll ans = 1;
    for(int i=2; i<=n; i++){
        if(a[i] < a[i-1]){
            dp[i] = dp[i-1] + i;
        } else{
            dp[i] = dp[i-1] + 1;
        }
        ans += dp[i];
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