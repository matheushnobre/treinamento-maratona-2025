#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const int mod = 1e9+7;

ll Exp(ll x, ll n){
    if(n == 0) return 1;
    ll m = Exp(x, n/2);
    if(n % 2 == 1) return (x*m*m) % mod;
    return (m*m) % mod;
}

int main(){
    int x, n;
    cin>>x>>n;

    cout<<Exp(x, n)<<endl;

    return 0;
}