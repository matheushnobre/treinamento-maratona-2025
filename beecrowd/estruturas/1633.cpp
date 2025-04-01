#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve(int n){
    vector<pair<ll, ll>> lista(n);
    for(int i=0; i<n; i++) cin>>lista[i].first>>lista[i].second;

    sort(lista.begin(), lista.end());
    ll tatual = lista[0].first;
    ll ans = 0;

    priority_queue<pair<int, int>> prioridade;
    int aux = 0;
    while(aux < n || prioridade.size() > 0){
        while(aux < n && lista[aux].first <= tatual){
            prioridade.push({-lista[aux].second, lista[aux].first});
            aux++;
        }

        if(prioridade.empty()) tatual = lista[aux].first;
        pair<int, int> atual = prioridade.top();
        prioridade.pop();
        ans += tatual - atual.second;
        tatual += -atual.first;
    }

    cout<<ans<<endl;

}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    while(cin>>n)
        solve(n);
    return 0;
}