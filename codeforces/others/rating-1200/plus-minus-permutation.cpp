#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll mdc(ll a, ll b){
    while (b != 0){
        ll r = a % b;
        a = b;
        b = r;
    }
    return a;
}

ll mmc(ll a, ll b){
    return a * (b / mdc(a, b));
}

int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    int t;
    ll n, a, b;
    cin>>t;
    while(t--){
        cin>>n>>a>>b;
        ll mc = n / mmc(a, b);
        ll qtd1 = n - (n/a - mc) + 1, qtd2 = n/b - mc;
        ll s1 = ((n * (n+1)) / 2) - (((qtd1) * (qtd1+1)) / 2);
        ll s2 = ((qtd2 * (qtd2+1)) / 2);
        cout<<s1-s2<<endl;
    }

    return 0;
}