#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned int ui;
const ll inf = 1e18+10;
const int mod = 1e9+7;

void solve(){
    int n, k; cin>>n>>k;
    vector<int> p(n);
    for(int i=0; i<n; i++) cin>>p[i];
    sort(p.begin(), p.end());

    int ans=1, t=1;
    for(int i=1; i<n; i++){
        if(p[i] - p[i-1] <= k) t++;
        else t=1;
        ans = max(ans, t);
    }
    cout<<n-ans<<endl;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0); 
    int t=1;
    cin>>t;
    while(t--) solve();
    return 0;
}