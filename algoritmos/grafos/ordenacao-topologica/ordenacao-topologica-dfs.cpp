#include <bits/stdc++.h>
using namespace std;

// Variáveis globais necessárias
vector<vector<int>> adj; // Lista de adjacência
vector<bool> temporario; // Marca vértices temporariamente visitados
vector<bool> definitivo; // Marca vértices definitivamente visitados
vector<int> L;           // Lista para armazenar a ordenação topológica

void visite(int v){
    if(temporario[v]) {
        throw runtime_error("Detecção de ciclo: o grafo possui um ciclo.");
    }

    if(!definitivo[v]){
        temporario[v] = true; // Marque temporariamente
        for(int w : adj[v]){
            visite(w); // Chamada recursiva
        }
        temporario[v] = false; // Desmarque o vértice
        definitivo[v] = true;
        L.insert(L.begin(), v);
    }
}

vector<int> ordenacaoTopologica(int V){
    for(int v=0; v<V; v++){
        if(!definitivo[v]){
            visite(v); // Visite o vértice
        }
    }
    return L;
}

int main(){
    int V, E; // Número de vértices e arestas
    cin >> V >> E;

    // Inicialize as estruturas globais
    adj.resize(V);
    temporario.resize(V, false);
    definitivo.resize(V, false);

    // Inicializa a lista de adjacência
    int inicio, fim;
    for (int i = 0; i < E; i++){
        cin >> inicio >> fim;
        adj[inicio].push_back(fim);
    }

    try{
        vector<int> ordenacao = ordenacaoTopologica(V);
        cout << "Ordenação topológica: ";
        for(int v : ordenacao)
            cout << v << " ";
        cout << endl;
    } catch(const runtime_error &e){
        cout << e.what() << endl;
    }
    
    return 0;
}
