#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve(){
    int n;
    cin>>n;

    vector<vector<int>> grafo(n+1);
    vector<int> vizinhos(n+1);
    for(int i=0; i<n-1; i++){
        int a, b;
        cin>>a>>b;
        grafo[a].push_back(b);
        grafo[b].push_back(a);
        vizinhos[a]++;
        vizinhos[b]++;
    }

    for(int i=0; i<=n; i++){
        sort(grafo[i].begin(), grafo[i].end());
    }

    int atual = 0;

    string ans = "YES";
    vector<int> bfs(n);
    for(int i=0; i<n; i++){
        cin>>bfs[i];
        if(ans == "NO") continue;
        if(i == 0){
            if(bfs[i] != 1) ans = "NO";
            continue;
        }
        
        // este tem que ser vizinho do atual analisado
        int analisado = bfs[atual];
        int agora = bfs[i];

        int idx = lower_bound(grafo[analisado].begin(), grafo[analisado].end(), agora) - grafo[analisado].begin();
        if(grafo[analisado][idx] != agora) ans = "NO";

        // diminui a quantidade de vizinho
        vizinhos[analisado]--;
        vizinhos[agora]--;

        while(atual < i && vizinhos[bfs[atual]]==0) atual++;
    }

    cout<<ans<<endl;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}