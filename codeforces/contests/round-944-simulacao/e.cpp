#include <bits/stdc++.h>
using namespace std;

typedef unsigned int ui;
typedef long long ll;

int solve(){
    ll n, d, k, q;
    cin>>n>>k>>q;
    vector<ll> a(k+1), b(k+1);
    for(int i=1; i<=k; i++) cin>>a[i];
    for(int i=1; i<=k; i++) cin>>b[i];
    a[0] = 0;
    b[0] = 0;

    for(int i=0; i<q; i++){
        cin>>d;
        int indpost = lower_bound(a.begin(), a.end(), d) - a.begin();
        if(a[indpost] == d){
            cout<<b[indpost]<<" ";
        } else{
            int indant = indpost-1;
                ll dd = a[indpost] - a[indant];
                ll dt = b[indpost] - b[indant];
                ll answer = b[indant] + ((d - a[indant]) * dt) / dd;
                cout<<answer<<" ";
        }
    }
    
    cout<<endl;
    return 0;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--) solve();
    return 0;
}