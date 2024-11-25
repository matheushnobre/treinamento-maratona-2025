#include <bits/stdc++.h>
using namespace std;

#define MAXV 1000

// Função para imprimir os vizinhos de cada vértice
void imprimirGrafo(int grafo[][MAXV], int v){
    for(int i=0; i<v; i++){
        cout<<"Vertice "<<i<<" possui como vizinhos: ";
        for(int j=0; j<v; j++){
            if(grafo[i][j] == 1)
                cout<<grafo[i][j]<<" ";
        } cout<<endl;
    }
}

int main(){
    ios::sync_with_stdio(false); cin.tie(0);
    int vertices, arestas;

    cin>>vertices>>arestas;
    int grafo[MAXV][MAXV] = {0};
    
    for(int i=0; i<arestas; i++){
        int u, v;
        cin>>u>>v;

        // Grafo direcionado
        grafo[u][v] = 1;
        grafo[v][u] = 1; 
    }

    imprimirGrafo(grafo, vertices);

    return 0;
}