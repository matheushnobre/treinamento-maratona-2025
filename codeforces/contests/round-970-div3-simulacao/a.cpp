#include <bits/stdc++.h>
using namespace std;

int solve(){
    int a, b;
    cin>>a>>b;

    if(a==0)
        if(b%2==0) cout<<"YES\n";
        else cout<<"NO\n";

    else if(a%2==0) cout<<"YES\n";
    else cout<<"NO\n";
    return 0;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t; cin>>t;
    while(t--) solve();
    return 0;
}