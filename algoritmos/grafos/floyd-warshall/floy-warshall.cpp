#include <bits/stdc++.h>
using namespace std;

const int maxn = 110;
int n;

// peso das arestas
int pesos[maxn][maxn];

// distância entre qualquer par de vértices
int distancias[maxn][maxn];

void floyd_warshall(){
	// inicialmente, a distância de u->v será o peso da sua aresta (se existir)
	// caso não exista, então seu valor será infinito (um valor bem grande) ou 0 se u = v.
	for (int i=1; i<=n; i++)
		for (int j=1; j<=n; j++)
			distancias[i][j] = pesos[i][j];

	for (int k=1; k<=n; k++) // vértice intermediário
		for (int i=1; i<=n; i++)
			for (int j=1; j<=n; j++)
				distancias[i][j] = min(distancias[i][j], distancias[i][k] + distancias[j][k]); // recursão principal
}