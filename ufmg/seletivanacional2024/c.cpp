#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve(){
    int n;
    cin>>n;
    vector<int> a(n);
    map<int, int> freq;
    ll ans = 0;
    for(int i=0; i<n; i++){
        cin>>a[i];
        freq[a[i]]++;
    }

    for(int v : a){
        if(v == 0) ans += freq[0]-1;
        else ans += freq[-v];
    }
    cout<<ans/2<<endl;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t=1;
    //cin>>t;
    while(t--) solve();
    return 0;
}