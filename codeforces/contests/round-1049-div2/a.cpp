#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve(){
    ll n, c, m=0;
    cin>>n>>c;

    vector<ll> a(n);
    for(int i=0; i<n; i++){
        cin>>a[i];
        if(a[i] <= c) m+=1;
    }
        
    sort(a.begin(), a.end());
    int ans = n, aux = 0;

    for(int i=m-1; i>=0; i--){
        for(int j=0; j<aux; j++) a[i] *=2;
        if(a[i] <= c) {
            ans--;
            aux++;
        }
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