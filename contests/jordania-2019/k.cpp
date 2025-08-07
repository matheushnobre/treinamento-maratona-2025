#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin>>n;
    vector<ll> a(n);
    for(int i=0; i<n; i++) cin>>a[i];

    ll ans = 0;
    for(ll i=0; i<pow(2,n); i++){
        ll o = 0;
        for(int j=0; j<n; j++){
            if(i & (1<<j)) o = o | a[j];
        }
        ans += o;
        //cout<<i<<" "<<o<<endl;
    }

    cout<<ans<<endl;
}