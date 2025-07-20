#include <bits/stdc++.h> 
using namespace std;

void solve(){
    int n, k;
    cin>>n>>k;
    vector<int> a(n);
    for(int i=0; i<n; i++) cin>>a[i];

    int ans = 0, temp = 0;
    for(int i=0; i<n; i++){
        if(a[i] == 0) temp++;
        else temp = 0;

        if(temp == k) ans++;
        if(temp == k+1) temp = 0;
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