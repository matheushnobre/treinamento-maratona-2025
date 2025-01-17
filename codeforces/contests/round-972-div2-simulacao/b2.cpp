#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve(){
    ll n, a, s; 
    int m, q;
    cin>>n>>m>>q;
    vector<ll> b(m);
    for(int i=0; i<m; i++) cin>>b[i];
    sort(b.begin(), b.end());
    
    while(q--){
        cin>>a;
        if(a < b[0]) s = b[0]-1;
        else if(a > b[m-1]) s = n - b[m-1];
        else{
            int ind = lower_bound(b.begin(), b.end(), a) - b.begin();
            s = abs(b[ind] - b[ind-1]) / 2;
        }
        cout<<s<<endl;
    }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t; cin>>t;
    while(t--) solve();
    return 0;
}