#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const int mod = 1e9+7;

// converte de string para um número inteiro % mod
ll conv(string a, int m){
    ll ans = 0;
    for(int i=0; i<a.size(); i++){
        ans *= 10;
        int n = a[i] - '0';
        ans += n;
        ans %= m;
    }
    return ans;
}

ll add(ll a, ll b){
    return (a+b) % mod;
}

ll sub(ll a, ll b){
    return ((a-b) % mod + mod) % mod;
}

ll mul(ll a, ll b){
    return (a*b) % mod;
}

// exponenciação rápida
ll Exp(ll a, ll b){
    if(b == 0) return 1;
    ll m = Exp(a, b/2);
    if(b % 2 == 1) return mul(mul(m, m), a);
    return mul(m, m);
}

int main(){
    string a, b;
    char o;

    cin>>a>>o>>b;
    ll n1 = conv(a, mod);
    ll n2 = conv(b, mod);
    
    ll ans;
    if(o == '+') ans = add(n1, n2);
    else if(o == '-') ans = sub(n1, n2);
    else if(o == '*') ans = mul(n1, n2);
    else {
      n2 = conv(b, mod-1);
      ans = Exp(n1, n2);
    }

    cout<<ans<<endl;
}