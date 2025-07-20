#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define MAX 100010

vector<int> a(MAX), b(MAX), idxA(MAX), idxB(MAX), dp(MAX);

int calc(int i){
    if(dp[i] != 0) return dp[i];
    
    int ia = idxA[i], ib = idxB[i];
    if(a[ia+1] == b[ib+1] && a[ia+1] != 0)
        dp[i] = 1 + calc(a[ia+1]);
    else dp[i] = 1;

    return dp[i];
}

void solve(){
    ll n, f, s;
    cin>>n>>f>>s;

    for(int i=0; i<n; i++) {
        cin>>a[i];
        idxA[a[i]] = i;
    }

    for(int i=0; i<n; i++) {
        cin>>b[i];
        idxB[b[i]] = i;
    }

    for(int i=1; i<=n; i++){
        dp[i] = calc(i);
    }

    ll ans = 1e18;
    for(ll i=1; i<=n; i++){
        ll e = idxA[i] + idxB[i];
        ll d = 2*(n - dp[i]) - e;
        ll temp = max(f*e,  s*d);
        ans = min(ans, temp);
    }

    cout<<ans<<endl;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}