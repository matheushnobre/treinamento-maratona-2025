#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve(){
    ll n, b1, b2, a, s; 
    int m, q;
    cin>>n>>m>>q>>b1>>b2>>a;

    if(b1 < b2 && b2 < a) s = n - b2;
    else if (b2 < b1 && b1 < a) s = n - b1;
    else if(a < b1 && b1 < b2) s = b1 - 1;
    else if(a < b2 && b2 < b1) s = b2 - 1;
    else s = abs(b2-b1) / 2;

    cout<<s<<endl;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t; cin>>t;
    while(t--) solve();
    return 0;
}