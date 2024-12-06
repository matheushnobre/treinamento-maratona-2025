#include <bits/stdc++.h>
using namespace std;

#define MAXN 50010

vector<vector<int>> adj(MAXN);
vector<int> grauEntrada(MAXN, 0);

vector<int> ordenacao(int n){
    vector<int> saida;
    priority_queue<int> fila;

    for(int i=0; i<n; i++){
        if(grauEntrada[i] == 0)
            fila.push(-i);
    }

    while (!fila.empty()){
        int v = -fila.top(); fila.pop();
        saida.push_back(v);

        for(int d : adj[v]){
            grauEntrada[d]--;
            if(grauEntrada[d] == 0) 
                fila.push(-d);
        }   
    }
    return saida;
}

int main(){
    unsigned int n, m, a, b;
    cin>>n>>m;
    while(m--){
        cin>>a>>b;
        adj[a].push_back(b);
        grauEntrada[b]++;
    }

    vector<int> saida = ordenacao(n);

    if(saida.size() != n){
        cout<<"*"<<endl;
        return 0;
    }

    for(int i : saida)
        cout<<i<<endl;

    return 0;
}