#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const ll INF = 1e18;

void dfsPai(int i, vector<int>& pai, vector<vector<int>>& grafo){
    for(int vz : grafo[i]){
        if(pai[vz] == -1){
            pai[vz] = i;
            dfsPai(vz, pai, grafo);
        }
    }
}

ll dfs(int i, vector<ll>& danger, vector<int>& pai, vector<ll>& ans){
    if(ans[i] != -1) return ans[i];
    ans[i] = max(danger[i], danger[i] - danger[pai[i]] + dfs(pai[pai[i]], danger, pai, ans));
    return ans[i];
}

void solve(){
    int n;
    cin>>n;
    vector<ll> danger(n+1);
    vector<int> pai(n+1, -1);
    vector<vector<int>> grafo(n+1);

    for(int i=1; i<=n; i++) cin>>danger[i];
    for(int i=0; i<n-1; i++){
        int u, v;
        cin>>u>>v;
        grafo[v].push_back(u);
        grafo[u].push_back(v);
    }

    pai[1] = 0;
    for(int i=1; i<=n; i++){
        dfsPai(i, pai, grafo);
    }

    vector<ll> ans(n+1, -1);
    ans[0] = 0;
    ans[1] = danger[1];

    for(int i=1; i<=n; i++){
        if(ans[i] == -1){
            dfs(i, danger, pai, ans);
        }
    }

    for(int i=1; i<=n; i++) cout<<ans[i]<<" ";
    cout<<endl;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t=1;
    cin>>t;
    while(t--) solve();
    return 0;
}