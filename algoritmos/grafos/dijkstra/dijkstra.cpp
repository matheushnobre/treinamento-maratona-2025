#include <bits/stdc++.h>
using namespace std;

typedef pair<int, int> pii;
const int MAXN = 1e5+10;
const int INF = 1e9+10;

int n, m; 
int distancias[MAXN];
bool visitados[MAXN];
vector<pii> grafo[MAXN];

int dijkstra(int origem, int destino){
    // Inicializa o vetor de distâncias com valores infinitos 
	for (int i=1; i<=n; i++)
		distancias[i] = INF;

	distancias[origem] = 0; // A distância para origem sempre será 0
	priority_queue<pii, vector<pii>, greater<pii>> fila; 
	fila.push({0, origem});

	while (!fila.empty()){
		int v_atual = fila.top().second;
		fila.pop();

		if (visitados[v_atual]) // Se já foi visitado, ignore
			continue;

		visitados[v_atual] = 1;

		for (auto V : grafo[v_atual]){
			int vz = V.first, peso = V.second;

            // Relaxamento: caso a nova distância seja menor que a anterior, atualiza e adiciona na fila
			if (distancias[vz] > distancias[v_atual] + peso){
				distancias[vz] = distancias[v_atual] + peso;
				fila.push({distancias[vz], vz});
			}
		}
	}

    return distancias[destino];
}