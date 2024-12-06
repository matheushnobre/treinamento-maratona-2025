#include <bits/stdc++.h>
using namespace std;

#define MAXN 50010
vector<int> grauEntrada(MAXN, 0); // Vetor que armazena o grau de entrada de cada vértice
vector<vector<int>> adj(MAXN); // Lista de adjacências

vector<int> ordenacaoTopologica(int V){
    vector<int> L; // Lista de ordenação topológica
    queue<int> S; // Conjunto de vértices sem arcos de entrada

    // Insere os vértices sem arcos de entrada no conjunto S
    for(int i=0; i<V; i++)
        if(grauEntrada[i] == 0) S.push(i);
    
    // Enquanto S não estiver vazio
    while(!S.empty()){
        int v = S.front(); S.pop(); // Remove um vértice de S
        L.push_back(v); // Insere o vértice em L

        for(int w : adj[v]) { // Para cada arco (v, w)
            grauEntrada[w]--; // Remove o arco v->w
            if (grauEntrada[w] == 0)
                S.push(w); // Insere w em S se não possuir mais arcos de entrada
        }
    }

    if (L.size() != V) throw runtime_error("O grafo possui pelo menos um ciclo!");
    return L;
}

int main(){
    int V, A; // Número de vértices
    cin>>V>>A;

    // Inicializa o grau de entrada de cada vértice
    int inicio, fim;
    while (A--){
        cin>>inicio>>fim;
        grauEntrada[fim]++;
        adj[inicio].push_back(fim);
    }

    try{
        vector<int> ordenacao = ordenacaoTopologica(V);
        cout<<"Ordenacao topologica: ";
        for(int v : ordenacao)
            cout<<v<<" ";
        cout<<endl;
    } catch(const runtime_error &e){
        cout<<e.what()<<endl;
    }
    
    return 0;
}