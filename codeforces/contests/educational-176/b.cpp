#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve(){
    int n, k;
    ll ans = 0;
    cin>>n>>k;
    vector<int> a(n);
    for(int i=0; i<n; i++) cin>>a[i];
    
    if(k > 1){
      sort(a.rbegin(), a.rend());
      for(int i=0; i<=k; i++) ans += a[i];
    } else {
      ll temp = 0;
      for(int i=0; i<n; i++){
        temp = a[i];
        if(i == 0) temp += a[n-1];
        else if(i == n-1) temp += a[0];
        else temp += max(a[0], a[n-1]);
        ans = max(ans, temp);
      }
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