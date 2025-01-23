#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned int ui;
const ll inf = 1e18+10;
const int mod = 1e9+7;

void solve(){
    int n, f, k;
    cin>>n>>f>>k;
    vector<int> a(n+1);
    for(int i=0; i<n; i++) cin>>a[i];

    int fav = a[f-1];
    sort(a.rbegin(), a.rend());

    int r=0;
    for(int i=0; i<k; i++)
        if(a[i] == fav) r=1;

    if(r==0) cout<<"NO\n";
    else if(r==1 && a[k] != fav) cout<<"YES\n";
    else cout<<"MAYBE\n";
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t=1;
    cin>>t;
    while(t--) solve();
    return 0;
}