#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve(){
    ll k, l1, r1, l2, r2;
    cin>>k>>l1>>r1>>l2>>r2;
    ll kn=1, answer = 0;
    while(kn <= 1e9){
        ll inicio2, aux, qtdMultiplos;

        if (l2 <= kn) inicio2 = kn;
        else{
            if(l2 % kn != 0) inicio2 = l2 + (kn - (l2 % kn));
            else inicio2 = l2;
        } 

        aux = max(inicio2 / kn, l1);
        inicio2 = aux * kn;

        if(inicio2 > r2 || aux > r1){
            kn *= k;
            continue;
        }

        qtdMultiplos = (r2 - inicio2) / kn + 1;
        answer += max(0LL, min(qtdMultiplos, r1-aux+1));
        kn *= k;
    }

    cout<<answer<<endl;
}

int main(){
    int t;
    cin>>t;
    while(t--) solve();
    return 0;
}