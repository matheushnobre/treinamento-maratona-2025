#include <bits/stdc++.h>
using namespace std;

typedef vector<vector<int>> vii;

bool dfs(vii& grafo, int o, int d, vector<int>& visitados){
    visitados[o] = 1;
    for(int vizinho : grafo[o]){
        if(vizinho == d) return true;
        if (!visitados[vizinho] && dfs(grafo, vizinho, d, visitados)) {
            return true;
        }
    }
    return false;
}

int main(){
    ios::sync_with_stdio(false); cin.tie(0);
    int v, a, o, d, q;

    cin>>v>>a;

    vii grafo(v+1); 
    for(int i=0; i<a; i++){
        cin>>o>>d;
        grafo[o].push_back(d); 
        grafo[d].push_back(o); 
    }

    // Realizando consultas para saber se existe caminho do vértice O para o vértice D
    cin>>q;
    for(int i=0; i<q; i++){
        cin>>o>>d;
        vector<int> visitados(v+1, 0);
        if(dfs(grafo, o, d, visitados)) cout<<"YES\n";
        else cout<<"NO\n";
    }

    return 0;
}