#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n, k1, k2, p, b;
    cin>>n>>k1>>k2>>p>>b;

    int pp = (k1+k2) / 2;
    int pb = (2*n - (k1+k2)) / 2;
    
    if(pp >= p && pb >= b) cout<<"YES\n";
    else cout<<"NO\n";
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t=1;
    cin>>t;
    while(t--) solve();
    return 0;
}