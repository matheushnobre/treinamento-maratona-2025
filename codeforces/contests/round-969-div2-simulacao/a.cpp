#include <bits/stdc++.h>
using namespace std;

void solve(){
    int l, r, imp=0;
    cin>>l>>r;
    for(int i=l; i<=r; i++) if(i%2==1) imp++;
    cout<<imp/2<<endl;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t; cin>>t;
    while(t--) solve();
    return 0;
}