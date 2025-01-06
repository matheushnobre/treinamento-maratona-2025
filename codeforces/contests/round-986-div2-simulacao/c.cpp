// Upsolving

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int solve(){
    int n, m;
    ll v, answer=0;
    cin>>n>>m>>v;
    vector<ll> entrada(n), p(n), prefixSum(n+1);
    map<int, int> mapa;

    ll somaTemp=0;
    int qtdFeliz=0;
    for(int i=0; i<n; i++){
        cin>>entrada[i];
        somaTemp += entrada[i];
        if(somaTemp >= v){
            qtdFeliz++;
            somaTemp = 0;
        }
        p[i] = qtdFeliz;
        prefixSum[i+1] = prefixSum[i] + entrada[i];
    }

    somaTemp = 0;
    qtdFeliz = 0;
    for(int i=n-1; i>=0; i--){
        somaTemp += entrada[i];
        if(somaTemp >= v){
            qtdFeliz++;
            somaTemp = 0;
        }
        mapa[qtdFeliz] = max(mapa[qtdFeliz], i);
    }

    mapa[0] = n;

    if(qtdFeliz < m){
        cout<<-1<<endl;
        return 0;
    }

    for(int i=0; i<n; i++){
        int feliz = 0;
        if(i!=0) feliz = p[i-1];
        int faltam = max(0, m-feliz);
        ll temp = prefixSum[mapa[faltam]] - prefixSum[i];
        answer = max(answer, temp);
    }

    cout<<answer<<endl;
    return 0;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--) solve();
    return 0;
}