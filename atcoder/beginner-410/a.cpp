#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n, k;
    cin>>n;
    vector<int> a(n);
    for(int i=0; i<n; i++) cin>>a[i];
    cin>>k;
    int ans=0;
    for(int i=0; i<n; i++) if(a[i]>=k) ans++;
    cout<<ans<<endl;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t=1;
    //cin>>t;
    while(t--) solve();
    return 0;
}