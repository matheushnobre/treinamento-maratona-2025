#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int solve(){
    ll l, r;
    cin>>l>>r;

    if(l==r){
        cout<<1<<endl;
        return 0;
    }

    ll answer = 1;
    ll a=1, b=1, c=2*(r-l);
    ll x1 = (-b + sqrt(pow(b, 2) + 4*a*c)) / 2;
    ll x2 = (-b - sqrt(pow(b, 2) + 4*a*c)) / 2;

    answer += max(x1, x2);
    cout<<answer<<endl;

    return 0;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t; cin>>t;
    while(t--) solve();
    return 0;
}