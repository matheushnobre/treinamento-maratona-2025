#include <bits/stdc++.h>
using namespace std;

#define MAX 500010
typedef long long ll;

vector<vector<int>> grafo(MAX);
vector<ll> lucro(MAX);
vector<ll> pegar(MAX), nPegar(MAX, -1);
vector<int> visitados(MAX);

ll resolver(int i){
    if(nPegar[i] != -1) return max(nPegar[i], pegar[i]);
    nPegar[i] = 0;
    for(int vz : grafo[i]){
        nPegar[i] += max(pegar[vz], resolver(vz));
    }
    return max(nPegar[i], pegar[i]);
}

ll dfs(int i){
    if(visitados[i]) return 0;
    visitados[i] = 1;

    pegar[i] = lucro[i];
    for(int vz : grafo[i]){
        pegar[i] += dfs(vz);
    }

    return pegar[i];
}

void solve(){
    int n;
    cin>>n;

    for(int i=1; i<=n; i++) cin>>lucro[i];
    for(int i=2; i<=n; i++){
        int v;
        cin>>v;
        grafo[v].push_back(i);
    }

    dfs(1);
    cout<<resolver(1)<<endl;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}