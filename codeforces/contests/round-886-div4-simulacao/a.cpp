#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned int ui;
const ll inf = 1e18+10;
const int mod = 1e9+7;

void solve(){
    vector<int> a(3);
    for(int i=0; i<3; i++) cin>>a[i];
    sort(a.rbegin(), a.rend());
    if(a[0]+a[1] >= 10) cout<<"YES\n";
    else cout<<"NO\n";
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0); 
    cout.tie(0);
    int t=1;
    cin>>t;
    while(t--) solve();
    return 0;
}