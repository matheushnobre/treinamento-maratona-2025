#include <bits/stdc++.h>
using namespace std;

typedef pair<int, int> pii; // (peso, destino)

int prim(int n, vector<vector<pii>>& grafo) {
    vector<int> visitado(n, 0);
    priority_queue<pii, vector<pii>, greater<pii>> fila; // min-heap
    int custoTotal = 0;

    // Começamos pelo vértice 0 (poderia ser qualquer um)
    fila.push({0, 0}); // (peso, vértice)

    while (!fila.empty()) {
        pii t = fila.top();
        fila.pop();
        int peso = t.first;
        int u = t.second;

        if (visitado[u]) continue; // se já foi visitado, podemos simplesmente ignorar
        visitado[u] = 1;
        custoTotal += peso;

        for (auto vz : grafo[u]) { // pega os vizinhos
            int v = t.first;
            int peso = t.second;
            if (!visitado[v]) {
                fila.push({peso, v});
            }
        }
    }

    return custoTotal;
}
