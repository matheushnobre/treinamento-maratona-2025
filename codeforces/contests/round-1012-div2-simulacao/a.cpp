#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve(){
    int x, y, a;
    cin>>x>>y>>a;

    int control = (x+y) * (a / (x+y));
    if(control + x > a) cout<<"NO"<<endl;
    else cout<<"YES"<<endl;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t=1;
    cin>>t;
    while(t--) solve();
    return 0;
}