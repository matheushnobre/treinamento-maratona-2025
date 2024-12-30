#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
ll mod;

ll exponenciacao(ll base, ll expoente){
    ll saida = 1;
    while(expoente > 0){
        if(expoente % 2 == 1)
            saida = (saida * base) % mod;
        base = (base * base) % mod;
        expoente /= 2;
    }
    return saida;
}

void solve(){
    int k;
    ll answer=6, expoente=1;
    cin>>k;

    for(int i=1; i<=k; i++)
        expoente = (expoente * 2) % (mod-1);

    answer = (answer * exponenciacao(4, expoente-2)) % mod;
    cout<<answer<<endl;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    mod = 1e9+7;
    solve();
    return 0;
}