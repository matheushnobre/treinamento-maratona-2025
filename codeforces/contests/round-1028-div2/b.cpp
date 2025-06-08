#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const int mod = 998244353;

ll Exp(ll x, ll n){
    if(n == 0) return 1;
    ll m = Exp(x, n/2);
    if(n % 2 == 1) return (x*m*m) % mod;
    return (m*m) % mod;
}

void solve(){
    int n; cin>>n;
    vector<ll> a(n), b(n);
    for(int i=0; i<n; i++){
        cin>>a[i];
    } for(int i=0; i<n; i++){
        cin>>b[i];
    }

    vector<ll> c(n);
    int m1=0, m2=0;
    for(int i=0; i<n; i++){
        if(a[i] > a[m1]) m1 = i;
        if(b[i] > b[m2]) m2 = i;

        if(a[m1] == b[m2]){
            if(b[i-m1] >= a[i-m2])
                c[i] = (Exp(2, a[m1]) + Exp(2, b[i-m1])) % mod;
            else 
                c[i] = (Exp(2, b[m2]) + Exp(2, a[i-m2])) % mod;
        } else{
            if(a[m1] > b[m2])
                c[i] = (Exp(2, a[m1]) + Exp(2, b[i-m1])) % mod;
            else 
                c[i] = (Exp(2, b[m2]) + Exp(2, a[i-m2])) % mod;
        }
    }

    for(ll i : c) cout<<i<<" ";
    cout<<endl;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t=1;
    cin>>t;
    while(t--) solve();
    return 0;
}