#include <bits/stdc++.h>
using namespace std;

typedef pair<int, int> ii;
typedef vector<int> vi;
typedef vector<vector<ii>> vii;
typedef unsigned int ui;

const int INF = 1e6+10;

int dijkstra(vii& grafo, int n, int o, int d){
    vi visitados(n+1, 0);
    vi distancias(n+1, INF);
    distancias[o] = 0;
    priority_queue<ii, vector<ii>, greater<ii>> fila;
    fila.push({0, o});

    while(!fila.empty()){
        int v_atual = fila.top().second;
        fila.pop();

        if(visitados[v_atual]) continue;
        visitados[v_atual] = 1;

        for(auto vz : grafo[v_atual]){
            int v = vz.first;
            int peso = vz.second;

            if(distancias[v_atual] + peso < distancias[v]){
                distancias[v] = distancias[v_atual] + peso;
                fila.push({distancias[v], v});
            }
        }
    }

    return distancias[d];
}

void solve(int n, int e){
    int x, y, h, k, o, d;
    vii grafo(n+1);
    while(e--){
        cin>>x>>y>>h;
        bool mesmo=false;
        for(ui i=0; i<grafo[y].size(); i++){
            if(grafo[y][i].first == x){
                mesmo=true;
                grafo[y][i].second = 0;
                break;
            }
        }
        if(mesmo) h=0;
        grafo[x].push_back({y, h});
    }
    cin>>k;
    while(k--){
        cin>>o>>d;
        int answer = dijkstra(grafo, n, o, d);
        if (answer == INF) cout<<"Nao e possivel entregar a carta\n";
        else cout<<answer<<endl;
    }
    cout<<endl;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, e;
    while(true){
        cin>>n>>e;
        if(n == 0) break;
        solve(n, e);
    }

    return 0;
}