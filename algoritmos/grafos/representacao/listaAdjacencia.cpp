#include <bits/stdc++.h>
using namespace std;

// Função para imprimir os vizinhos de cada vértice
void imprimirGrafo(const vector<int> grafo[], int v){
    for(int i=0; i<v; i++){
        cout<<"Vertice "<<i<<" possui como vizinhos: ";
        for(int vizinho : grafo[i]){
            cout<<vizinho<<" ";
        } cout<<endl;
    }
}

int main(){
    ios::sync_with_stdio(false); cin.tie(0);
    int vertices, arestas;

    cin>>vertices>>arestas;

    vector<int> grafo[vertices+1]; // Adicionamos 1 para tratar casos em que os vértices iniciam de 1
    for(int i=0; i<arestas; i++){
        int u, v;
        cin>>u>>v;

        // Grafo direcionado
        grafo[u].push_back(v); 
        grafo[v].push_back(u); 
    }

    imprimirGrafo(grafo, vertices);

    return 0;
}