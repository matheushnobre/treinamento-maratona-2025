#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve(){
    int n, k;
    cin>>n>>k;
    int ans = 0;
    if(n % 2 == 1) {
      n -= k;
      ans++;
    }
    k--;
    if(n % k == 0) ans += n/k;
    else ans += n/k + 1;
    
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