#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve(){
    ll n;
    cin>>n;
    vector<ll> a(n);
    for(int i=0; i<n; i++) cin>>a[i];

    ll y = ((-2 * a[0]) + a[1]) / ((-2*n) + (n-1));
    ll x = a[0] - n*y;
    if(x < 0 || y < 0){
        cout<<"NO"<<endl;
        return;
    }

    for(ll i=0; i<n; i++){
        if((i+1)*x + (n-i)*y != a[i]){
            cout<<"NO"<<endl;
            return;
        }
    }

    cout<<"YES"<<endl;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t=1;
    cin>>t;
    while(t--) solve();
    return 0;
}