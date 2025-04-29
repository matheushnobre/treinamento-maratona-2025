#include <bits/stdc++.h>
using namespace std;

#define MAXN 100010
#define MAXM 2*MAXN

vector<vector<pair<int, int>>> grafo(MAXN);
vector<int> controle(MAXM);

vector<int> bfs(int o, int d){
    vector<int> visitados(MAXN);
    vector<int> ult(MAXN);
    queue<int> fila;
    visitados[o] = 1;
    fila.push(o);
    
    while(!fila.empty()){
      int v = fila.front();
      fila.pop();
            
      for(auto& aux : grafo[v]){
        int vz = aux.first;
        if(v == o && vz == d) continue;

        if(!visitados[vz]){
          visitados[vz] = 1;
          ult[vz] = v;
          fila.push(vz);
        }
      }
    }
    
    vector<int> caminho;
    int atual = d;
    while(atual != o){
      caminho.push_back(atual);
      atual = ult[atual];
    }
    caminho.push_back(atual);
    caminho.push_back(d);
    return caminho;
}  

pair<int, int> ehPossivel(int o){
    vector<int> visitados(MAXN);
    queue<int> fila;

    visitados[o] = 1;
    fila.push(o);
  
    while(!fila.empty()){
        int v = fila.front();
        fila.pop();
                        
        for(auto& aux : grafo[v]){
            int vz = aux.first;
            int a = aux.second;

            if(controle[a]) 
                continue;
                    
            controle[a] = 1;
            
            if(!visitados[vz]){
                visitados[vz] = 1;
                fila.push(vz);
            } else{
                return {v, vz};
            }
        }
    }
    return {0, 0};
}

int main(){
    ios::sync_with_stdio(0); 
    cin.tie(0);
    
    int n, m, a, b;
    cin>>n>>m;
    for(int i=0; i<m; i++){
      cin>>a>>b;
      grafo[a].push_back({b, i});
      grafo[b].push_back({a, i});
    }
    
    pair<int, int> p = {0, 0};
    int c = 0;
    for(int i=0; i<=n; i++){
      if(grafo[i].size() > 1){
        p = ehPossivel(i);
        c++;
        if(p.first != 0 || c == 2) break;
      }
    }
    if(p.first == 0){
      cout<<"IMPOSSIBLE"<<endl;
      return 0;
    }
    
    vector<int> caminho = bfs(p.first, p.second);
    cout<<caminho.size()<<endl;
    for(int c : caminho){
        cout<<c<<" ";
    } 
    cout<<endl;

    return 0;
}