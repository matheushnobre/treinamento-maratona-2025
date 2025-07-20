#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const int inf = 1e9;
const int limite = 2*10e5 + 10;

int fib(ll f1, ll f2, int k){
    //cout<<f1<<" "<<f2<<" "<<k<<endl;
    for(int i=3; i<=k; i++){
        ll temp = f1 + f2;
        f1 = f2;
        f2 = temp;
        if(temp > limite) return inf;
    }
    return f2;
}

void solve(){
    int n, k;
    cin>>n>>k;

    if(k > 30){
        cout<<0<<endl;
        return;
    }

    int ans = 0;
    for(ll i=0; i<n; i++){
        // aqui faz busca binária pra achar um J válido
        ll l = i, r = n;
        while(l <= r){
            ll m = (l + r) / 2;
            int aux = fib(i, m, k);
      //      cout<<"i = "<<i<<", m = "<<m<<", aux = "<<aux<<endl;
            if(aux == n){
                ans++;
                break;
            } else if(aux < n){
                l = m+1;
            } else{
                r = m-1;
            }
        }
    }

    cout<<ans<<endl;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--) solve();
    return 0;
}