#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve(){
    int n, q;
    cin>>n>>q;
    vector<int> v(n);
    for(int i=0; i<n; i++) cin>>v[i];
    sort(v.begin(), v.end());
    
    while(q--){
      int a, b;
      cin>>a>>b;
      int first = lower_bound(v.begin(), v.end(), a) - v.begin();
      int last = upper_bound(v.begin(), v.end(), b) - v.begin();
      int ans = last-first;
      cout<<ans<<endl;
    }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    freopen("haybales.in", "r", stdin);
    freopen("haybales.out","w", stdout);
    int t=1;
    //cin>>t;
    while(t--) solve();
    return 0;
}