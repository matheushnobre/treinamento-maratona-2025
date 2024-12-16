#include <bits/stdc++.h>
using namespace std;

int marcarCiclo(int v, vector<int> &grafo, vector<int> &ciclo){
    int v_atual = v;
    while(!ciclo[v_atual]){
        ciclo[v_atual] = 1;
        v_atual = grafo[v_atual];
    }
    return 0;
}

int acharCiclo(int v, vector<int> &grafo, vector<int> &visitados, vector<int> &visitadosTemp, vector<int> &ciclo, int aux){
    if(visitadosTemp[v] == aux){
        marcarCiclo(v, grafo, ciclo);
        return 0;
    }

    if(visitados[v]) return 0;

    visitados[v] = 1;
    visitadosTemp[v] = aux;
    return acharCiclo(grafo[v], grafo, visitados, visitadosTemp, ciclo, aux);
}

int dfs(int v, vector<int> &grafo, vector<int> &qtd, vector<int> &ciclo, int valor){
    if(ciclo[v] == 1) return 0;
    if(qtd[v] < valor) {
        qtd[v] = valor;
        return dfs(grafo[v], grafo, qtd, ciclo, valor+1);
    } 
    else return qtd[v];
}

void solve(){
    int n, r;
    cin>>n;
    vector<int> grafo(n), visitados(n, 0), visitadosTemp(n, 0), distancias(n, 0), ciclo(n, 0);
    vector<int> qtd(n, 0);
    vector<vector<int>> inverso(n);

    for(int i=0; i<n; i++){
        cin>>r;
        grafo[i] = r-1;
        inverso[r-1].push_back(i);
    }

    for(int i=0; i<n; i++){
        acharCiclo(i, grafo, visitados, visitadosTemp, ciclo, i+1);
    }

    for(int i=0; i<n; i++)
        if(inverso[i].size() == 0) dfs(i, grafo, qtd, ciclo, 1);

    int answer = 0;
    for(int i=0; i<n; i++){
        if(ciclo[i]){
            for(int v : inverso[i]){
                answer = max(qtd[v]+2, answer);
            }
        }
    }

    cout<<answer<<endl;
}

int main(){
    int t;
    cin>>t;
    while(t--)
        solve();
    return 0;
}