#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve(){
    int n; cin>>n;
    vector<ll> a(n), b(n), aux(n);
    for(int i=0; i<n; i++) cin>>a[i];
    for(int i=0; i<n; i++) cin>>b[i];

    ll total=0;
    for(int i=0; i<n; i++){
        aux[i] = max(0LL, b[i]-a[i]);
        total+=aux[i];
    }

    bool saida=true;
    for(int i=0; i<n; i++)
        if((a[i] + aux[i] - (total - aux[i])) < b[i]) saida=false;
    
    if(saida) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}

int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    int t; cin>>t;
    while(t--) solve();
    return 0;
}