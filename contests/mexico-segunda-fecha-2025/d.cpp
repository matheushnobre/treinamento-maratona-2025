#include <bits/stdc++.h>
using namespace std;

typedef pair<int, int> pii;
#define MAX 1000010

vector<vector<int>> grafo(MAX);
vector<int> e(MAX), visitados(MAX);;
vector<int> pai(MAX), peso(MAX), ans(MAX);

int n, m;

int find(int x){
    if(pai[x] == x) return x;
    return pai[x] = find(pai[x]);
}
 
void join(int x, int y){
    int a = find(x);
    int b = find(y);
    if(a == b) {
        return;
    }

    pai[b] = a;
    peso[a] += peso[b];
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin>>n>>m;
    // inicializar peso e pai
    for(int i=0; i<=n; i++){
        pai[i] = i;
        peso[i] = 1;
    }

    priority_queue<pii> fila;
    for(int i=1; i<=n; i++){
        cin>>e[i];
        fila.push({-e[i], i});
    }
    
    for(int i=0; i<m; i++){
        int a, b;
        cin>>a>>b;
        grafo[a].push_back(b);
        grafo[b].push_back(a);
    }

    while(!fila.empty()){
        pii V = fila.top();
        fila.pop();
 
        int energia = -V.first;
        int atual = V.second;

        vector<int> proc = {atual};
        while(!fila.empty() && -fila.top().first == energia){
            proc.push_back(fila.top().second);
            fila.pop();
        }
        
        for(int i : proc) {
            for(int vz : grafo[i]){
                if(e[vz] <= e[i]) join(i, vz);
            }
        }

        for(int v : proc){
            ans[v] = peso[find(v)];
            }
        }

    for(int i=1; i<=n; i++) cout<<ans[i]<<endl;
    return 0;
}