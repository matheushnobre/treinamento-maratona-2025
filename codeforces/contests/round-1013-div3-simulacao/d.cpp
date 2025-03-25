#include <bits/stdc++.h>
using namespace std;

typedef vector<int> vi;
typedef long long ll;
#define pb push_back

void solve(){
    ll n, m, k, aux;
    cin>>n>>m>>k;
    
    aux = k/n;
    if(k % n != 0) aux++;
        
    int g = min(aux, m-aux+1);
    if(aux % g == 0) cout<<aux/g<<endl;
    else cout<<aux/g+1<<endl;

}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t=1;
    cin>>t;
    while(t--) solve();
    return 0;
}