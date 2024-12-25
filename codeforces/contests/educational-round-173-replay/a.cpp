#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve(){
    ll n, ans=1;
    cin>>n;

    while(n >= 4){
        n /= 4;
        ans *= 2;
    }
    cout<<ans<<endl;
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