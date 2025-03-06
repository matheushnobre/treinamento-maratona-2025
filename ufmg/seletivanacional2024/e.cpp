#include <bits/stdc++.h>
using namespace std;

void solve(){
    int x1, y1, x2, y2;
    cin>>x1>>y1>>x2>>y2;
    int aux1 = abs(x1 - x2) + 1;
    int aux2 = abs(y1 - y2) + 1;
    if(x1 == x2 || y1 == y2) aux1++;
    cout<<aux1*2 + aux2*2<<endl;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t=1;
    //cin>>t;
    while(t--) solve();
    return 0;
}