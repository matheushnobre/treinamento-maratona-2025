#include <bits/stdc++.h>
using namespace std;

#define MAX 200010
typedef long long ll;
ll soma[MAX];

void geral(){
    for(ll i=1; i<MAX; i++){
        ll aux = i;
        soma[i] = soma[i-1];
        while (aux > 0){
            soma[i] += aux % 10;
            aux = aux / 10;
        }
    }
}

void solve(){
    int n;
    cin>>n;
    cout<<soma[n]<<endl;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t; cin>>t;
    geral();
    while(t--) solve();
    return 0;
}