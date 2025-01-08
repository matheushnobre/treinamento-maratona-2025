#include <bits/stdc++.h>
using namespace std;

int solve(){
    int a, b, c;
    cin>>a>>b>>c;
    if(a < b && b < c) cout<<"STAIR\n";
    else if(a < b && b > c) cout<<"PEAK\n";
    else cout<<"NONE\n";
    return 0;
}

int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    int t; cin>>t;
    while(t--) solve();
    return 0;
}

