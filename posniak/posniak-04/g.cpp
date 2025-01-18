#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned int ui;
const ll inf = 1e18;
const int mod = 1e9+7;

bool ehPrimo(ll v){
    if(v == 2 || v == 3) return true;
    for(int i=2; i<sqrt(v)+1; i++) {
        if(v % i == 0) return false;
    }
    return true;
}

void solve(){
    int n; ll v;
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>v;
        ll raiz = sqrt(v);
        if(v > 3 && raiz * raiz == v && ehPrimo(raiz)) cout<<"YES\n";
        else cout<<"NO\n";
    }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t=1; 
 //   cin>>t;
    while(t--) solve();
}