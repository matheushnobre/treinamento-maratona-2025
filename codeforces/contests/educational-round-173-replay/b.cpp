#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve(){
    ll n, d;
    cin>>n>>d;
    cout<<"1 ";
    if(n >= 3 || (d % 3 == 0 && d != 3)) cout<<"3 ";
    if(n == 2 && d % 2 == 1 && d != 1 && d != 5) cout<<d<<' ';
    if(d == 5) cout<<"5 ";
    if(n >= 3) cout<<"7 ";
    if(n >= 6 || (d % 3 == 0 && n != 2)) cout<<"9 ";
    cout<<endl;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--)
        solve();
    return 0;
}