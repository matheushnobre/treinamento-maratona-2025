#include <bits/stdc++.h>
using namespace std;

typedef unsigned int ui;

int solve(){
    int a[2], b[2];
    cin>>a[0]>>a[1]>>b[0]>>b[1];
    sort(a, a+2);
    sort(b, b+2);

    bool saida=false;
    if((a[0] < b[0] && b[0]< a[1]) && !(a[0] < b[1] && b[1] < a[1])) saida=true;
    if((a[0] < b[1] && b[1]< a[1]) && !(a[0] < b[0] && b[0] < a[1])) saida=true;
    if(saida) cout<<"YES\n";
    else cout<<"NO\n";
    return 0;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--) solve();
    return 0;
}