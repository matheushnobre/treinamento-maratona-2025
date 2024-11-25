#include <bits/stdc++.h>
using namespace std;

typedef vector<int> vi; 
                                       
int v;

void bfs(int origem, vector<vi> grafo){
    vi visitados(v, 0); 
    visitados[origem] = 1;                  
    queue<int> fila; 
    fila.push(origem);
 
    while (!fila.empty()) {
        int v_atual = fila.front(); 
	    fila.pop();
    
        printf("Visitando vertice %d\n",v_atual);
    
        for (int vizinho  : grafo[v_atual]) {                 
            if (visitados[vizinho] == 0) {
                visitados[vizinho] = 1;                    
                fila.push(vizinho);                               
            }
        }
    }
  
    for(int i=0; i<v; i++)
        printf("Visitados %d\n",visitados[i]);

}

int main() {
    int a; 
    cin>>v>>a;
    v += 1;
    vector<vi> grafo(v);
  
    for (int i=0; i<a; i++) {
        int a, b; 
	    cin>>a>>b;
        grafo[a].emplace_back(b);
        grafo[b].emplace_back(a);
    }
  
    bfs(0, grafo); 
 
  return 0;
}