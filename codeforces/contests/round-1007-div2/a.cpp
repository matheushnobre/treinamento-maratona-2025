#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve(){
    int k;
    cin>>k;
    if((k-1) % 3 == 0) cout<<"YES\n";
    else cout<<"NO\n";
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--) solve();
    return 0;
}