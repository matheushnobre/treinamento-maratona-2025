#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){
    ll t, q, k, v;
    map<ll, ll> mapa;
    cin>>t;
    while(t--){
        cin>>q;
        if(q==0){
            cin>>k>>v;
            mapa[k] = v;
        } else{
            cin>>k;
            cout<<mapa[k]<<endl;
        }
    }
    return 0;
}