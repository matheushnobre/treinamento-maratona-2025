#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> grafo(17);
typedef long long ll;

int n, m;
ll ans=0;

ll fat(int n){
    ll ans = 1;
    for(int i=1; i<=n; i++) ans *= i;
    return ans;
}

void dfs(int i, int tam){
    if(grafo[i].size() == 0){
        ll com = n-tam+1;
        ll falt = n-tam;
        ans += com * fat(falt);
    }

    for(int vz : grafo[i]) dfs(vz, tam+1); 
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin>>n>>m;
    for(int i=0; i<m; i++){
        int u, v;
        cin>>u>>v;
        grafo[u].push_back(v);
    }

    dfs(1, 1);
    cout<<ans<<endl;
    return 0;
}