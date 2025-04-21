#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve(){
    ll n, k, soma=0;
    cin>>n>>k;
    vector<ll> a1(n), a2(n), aux(n);
    
    for(int i=0; i<n; i++) cin>>a1[i];
    for(int i=0; i<n; i++) cin>>a2[i];
    
    for(int i=0; i<n; i++){
      soma += max(a1[i], a2[i]);
      aux[i] = min(a1[i], a2[i]);
    }
    
    sort(aux.rbegin(), aux.rend());
    for(int i=0; i<k-1; i++){
      soma += aux[i];
    }
    
    cout<<soma+1<<endl;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t=1;
    cin>>t;
    while(t--) solve();
    return 0;
}