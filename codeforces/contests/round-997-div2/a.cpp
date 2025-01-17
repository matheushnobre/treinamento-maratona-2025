#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n, m, x, y, xatual=0, yatual=0, fx=0, fy=0;
    cin>>n>>m;
    for(int i=0; i<n; i++){
        cin>>x>>y;
        if(i==0) {
            fx=x;
            fy=y;
        }
        xatual += x;
        yatual += y;
    }

    xatual += m-fx;
    yatual += m-fy;
    cout<<xatual*2+yatual*2<<endl;
}

int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    int t; cin>>t;
    while(t--) solve();
    return 0;
}