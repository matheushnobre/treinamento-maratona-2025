#include <bits/stdc++.h>
using namespace std;

#define MAXN 10010
int n, m;
vector<int> visitados(MAXN);
vector<vector<int>> grafo(MAXN);
vector<vector<int>> transposto(MAXN);
vector<int> componentes(MAXN);
stack<int> pilha;
vector<int> dp(MAXN);
vector<set<int>> festas(MAXN);

void dfs1(int i){
    visitados[i] = 1;
    for(int vz : grafo[i]){
        if(!visitados[vz]) dfs1(vz);
    }
    pilha.push(i);
}

void dfs2(int i, int aux){
    visitados[i] = 1;
    componentes[i] = aux;
    for(int vz : transposto[i]){
        if(!visitados[vz]) dfs2(vz, aux);
    }
}

int calcular(int festa){
    if(dp[festa]) return dp[festa];
    int melhor = 0;
    for(int vz : festas[festa]) 
        melhor = max(melhor, calcular(vz));
    dp[festa] = 1 + melhor;
    return dp[festa];
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin>>n>>m;
    for(int i=0; i<m; i++){
        int a, b;
        cin>>a>>b;
        grafo[a].push_back(b);
        transposto[b].push_back(a);
    }

    // 1º dfs do cfc
    for(int i=1; i<=n; i++)
        if(!visitados[i])
            dfs1(i);
    
    // 2º dfs do cfc
    for(int i=0; i<MAXN; i++) visitados[i] = 0;
    int aux=1;
    while(!pilha.empty()){
        int atual = pilha.top();
        pilha.pop();
        if(!visitados[atual]){
            dfs2(atual, aux);
            aux++;
        }
    }


    // Criando conexoes entre festas
    for(int i=1; i<=n; i++){
        for(int vz : grafo[i]){
            if(componentes[i] != componentes[vz]) 
                festas[componentes[i]].emplace(componentes[vz]);
        }
    }

    // dp
    int ans=0;
    for(int i=1; i<aux; i++) {
        ans = max(ans, calcular(i));
    }

    cout<<ans<<endl;
    return 0;
}