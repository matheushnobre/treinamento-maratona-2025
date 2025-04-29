// Apenas esboço

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int, int> pii;

void solve(){
  map<pii, int> parede;
  map<pii, int> visitado;
  
  int n, m, k, x, y, s;
  cin>>n>>m>>k;
  
  while(k--){
    cin>>x>>y>>s;
    
    int xmin = max(x-s, 0);
    int xmax = min(x+s, n);
    int ymin = max(y-s, 0);
    int ymax = min(y+s, m);
    
    for(int i=xmin; i<=xmax; i++){
      parede[{i, ymin}] = 1;
      parede[{i, ymax}] = 1;
    }
    
    for(int j=ymin; j<=ymax; j++){
      parede[{xmin, j}] = 1;
      parede[{xmax, j}] = 1;
    }
  }
  
  // TODO após o Codeforces
  // Percorrer as paredes, a partir do início delas
  // Verificar se alguma parede sozinha ou unida com outras paredes tranca o labirinto
  // Isso irá ocorrer quando ela estiver fechando uma linha (passa em todos os y possiveis) ou uma coluna (passa em todos os x possiveis)
  // A outra possibilidade é se formar um quadrado bloqueando a parte inicial do mapa
  // Em caso afirmativo, imprimir N 
  // Caso contrário, imprimir S
  

  // OBSERVACAO:
  // Supostamente terei que estudar UnionFind para detectar ciclos e resolver este problema

  
  if(parede[{0, 0}] || parede[{n-1, m-1}]){
    cout<<"N"<<endl;
    return;
  }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t=1;
    //cin>>t;
    while(t--) solve();
    return 0;
}