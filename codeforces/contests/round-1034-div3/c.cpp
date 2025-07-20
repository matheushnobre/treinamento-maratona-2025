#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    vector<int> a(n), p(n), s(n);
    string ans = "";
    for(int i=0; i<n; i++){
        cin>>a[i];
        if(i==0) p[i] = a[i];
        else p[i] = min(p[i-1], a[i]);

        if(a[i] == p[i]) ans += '1';
        else ans += '0';
    }

    for(int i=n-1; i>=0; i--){
        if(i==n-1) s[i] = a[i];
        else s[i] = max(s[i+1], a[i]);

        if(a[i] == s[i]) ans[i] = '1';
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