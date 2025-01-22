#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned int ui;
const int inf = 1e9+10;
const int mod = 1e9+7;

void solve(){
    ll n, l, r;
    cin>>n>>l>>r;
    vector<ll> a(n), a1, a2;
    for(int i=0; i<n; i++) {
        cin>>a[i];
        if(i < r) a1.push_back(a[i]);
        if(i >= l-1) a2.push_back(a[i]);
    }
    
    sort(a1.begin(), a1.end());
    sort(a2.begin(), a2.end());
    ll k = r-l+1;
    ll ans1=0, ans2=0;
    for(int i=0; i<k; i++){
        ans1 += a1[i];
        ans2 += a2[i];
    }
    ans1 = min(ans1, ans2);
    cout<<ans1<<endl;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t=1;
    cin>>t;
    while(t--) solve();
    return 0;
}