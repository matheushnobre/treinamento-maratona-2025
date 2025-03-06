#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve(){
    int n, m, b;
    cin>>n>>m;
    vector<ll> v(n);
    for(int i=0; i<n; i++) cin>>v[i];
    cin>>b;

    v[0] = min(v[0], b-v[0]);
    string ans="YES";
    for(int i=1; i<n; i++){
        ll minimo = min(v[i], b-v[i]);
        ll maximo = max(v[i], b-v[i]);
        if(minimo >= v[i-1]) v[i] = minimo;
        else v[i] = maximo;

        if(v[i] < v[i-1]) ans="NO";
    }

    cout<<ans<<endl;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--) solve();
    return 0;
}