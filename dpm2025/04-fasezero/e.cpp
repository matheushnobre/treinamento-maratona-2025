#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

vector<ll> fatorar(ll n){
    vector<ll> f;
    for(int i=2; i*i<=n; i++){
        while(n % i == 0) {
            n/=i;
            f.push_back(i);
        }
    }

    if(n > 1) f.push_back(n);
    return f;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    ll n, k;
    cin>>n>>k;

    vector<ll> f = fatorar(n);
    for(int i=1; i<f.size(); i++) f[i] = f[i-1] * f[i];
    f.push_back(n);

    ll kaux=0, pulo=1, atual=1, i=0;
    while(i < f.size()){
        ll p = (f[i] - atual) / pulo;
        if(kaux + p > k) break;

        kaux += p;
        atual = f[i];
        pulo = f[i];
        i++;
        
    }

    ll m = k - kaux;
    atual = atual + (pulo * m);

    cout<<atual<<endl;

    return 0;
}
