#include <bits/stdc++.h>
using namespace std;

void solve(){
    int x, y;
    cin>>x>>y;
    cout<<min(x, y)<<" "<<max(x, y)<<endl;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--) solve();
    return 0;
}