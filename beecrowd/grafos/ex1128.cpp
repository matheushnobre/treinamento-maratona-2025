// Fiz com DFS para praticar, entretanto também se resolve com BFS

#include <bits/stdc++.h>
using namespace std;

void dfs(const vector<int> grafo[], int o, vector<int>& visitados){
    visitados[o] = 1;
    for(int vizinho : grafo[o]){
        if(!visitados[vizinho]) dfs(grafo, vizinho, visitados);
    }
}

int main(){
    ios::sync_with_stdio(false); cin.tie(0);
    int n, m, v, w, p;
    cin>>n>>m;
    while(n!=0){
        vector<int> grafo[n+1];
        for(int i=0; i<m; i++){
            cin>>v>>w>>p;
            grafo[v].push_back(w);
            if(p==2)
                grafo[w].push_back(v);
        }
        
        int answer=1;
        for(int o=1; o<=n; o++){
            vector<int> visitados(n+1);
            dfs(grafo, o, visitados);
            for(int i=1; i<=n; i++)
                if(!visitados[i]) answer=0;
            if(answer == 0) break;
        }
        cout<<answer<<endl;

        cin>>n>>m;
    }

    return 0;
}