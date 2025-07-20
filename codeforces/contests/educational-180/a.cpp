#include <bits/stdc++.h>
using namespace std;

void solve(){
    int a, x, y;
    cin>>a>>x>>y;

    if((x > a && y > a) || (x < a && y < a)) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t=1;
    cin>>t;
    while(t--) solve();
    return 0;
}