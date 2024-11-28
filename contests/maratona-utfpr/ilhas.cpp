#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){
    ll n, r, q, a, b, amax=0, temp=0, aday=1;
    vector<pair<ll, ll>> entradas;
    cin>>n>>r;
    for(int i=0; i<r; i++){
        cin>>q>>a>>b;
        entradas.push_back({a, 1});
        entradas.push_back({b, 2});
    }
    sort(entradas.begin(), entradas.end());
    for(int i=0; i<2*r; i++){
        a = entradas[i].first;
        b = entradas[i].second;
        if(b==1) temp++;
        else temp--;

        if(temp > amax){
            amax = temp;
            aday = a;
        }

    }

    cout<<amax<<" "<<aday<<endl;

    return 0;
}