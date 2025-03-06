#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const ll inf = 1e20;
const int mod = 1e9+7;

void solve(){
    int n, k, p;
    cin>>n>>k>>p;
    k = abs(k);
    int ans;
    if(k % p == 0) ans = k/p;
    else ans = k/p +1;
    
    if(ans > n) ans = -1;
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