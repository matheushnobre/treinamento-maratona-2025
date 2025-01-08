// Upsolving

#include <bits/stdc++.h>
using namespace std;

typedef pair<int, int> ii;
typedef vector<int> vi;
#define INF 1e7

// Com dijkstra, obtemos TLE
// int dijkstra(map<char, vi>& portais, vector<string>& cidades, int origem, int destino, int numCidades){
//     vi visitados(numCidades+1);
//     vi distancias(numCidades+1, INF);
//     distancias[origem] = 0;

//     priority_queue<ii> fila;
//     fila.push({0, origem});

//     while(!fila.empty()){
//         int d_atual = fila.top().first;
//         int v_atual = fila.top().second;
//         fila.pop();
//         if (d_atual > distancias[v_atual]) continue;

//         char p1 = cidades[v_atual][0];
//         char p2 = cidades[v_atual][1];

//         for(int vz : portais[p1]){
//             if(!visitados[vz]){
//                 int peso = abs(vz - v_atual);
//                 if(distancias[v_atual] + peso >= distancias[vz]) continue;                
//                 distancias[vz] = d_atual + peso;
//                 fila.push({distancias[vz], vz});
//             }
//         }

//        for(int vz : portais[p2]){
//             if(!visitados[vz]){
//                 int peso = abs(vz - v_atual);
//                 if(distancias[v_atual] + peso >= distancias[vz]) continue;                
//                 distancias[vz] = d_atual + peso;
//                 fila.push({distancias[vz], vz});
//             }
//         }
//     }

//     if(distancias[destino] == INF) return -1;
//     return distancias[destino];
//}

int solucao(int origem, int destino, vector<string>& cidades, map<string, vi>& portais){
    char p1 = cidades[origem][0];
    char p2 = cidades[origem][1];
    char p3 = cidades[destino][0];
    char p4 = cidades[destino][1];

    if(p1 == p3 || p1 == p4 || p2 == p3 || p2 == p4)
        return abs(origem - destino);


    int menor = INF;

    vector<string> answers = {{p1, p3}, {p1, p4}, {p2, p3}, {p2, p4}, {p3, p1}, {p3, p2}, {p4, p1}, {p4, p2}};
    for(string s : answers){
        if(portais[s].size() == 0) continue;
        int idx = upper_bound(portais[s].begin(), portais[s].end(), origem) - portais[s].begin();
        if(idx >= 0 && idx < portais[s].size()){
            int dist = abs(portais[s][idx] - origem) + abs(portais[s][idx] - destino);
            menor = min(menor, dist);
        }

        idx -= 1;
        if(idx >= 0 && idx < portais[s].size()){
            int dist = abs(portais[s][idx] - origem) + abs(portais[s][idx] - destino);
            menor = min(menor, dist);
        }
    }
    
    if(menor == INF) return -1;
    return menor;
}

void solve(){
    int n, q, x, y;
    string c;
    cin>>n>>q;
    map<string, vi> portais;
    vector<string> cidades(n+1);

    for(int i=1; i<=n; i++){
        cin>>c;
        cidades[i] = c;
        portais[c].push_back(i);
    }

    while(q--){
        cin>>x>>y;
        //cout<<dijkstra(portais, cidades, x, y, n)<<endl;
        cout<<solucao(x, y, cidades, portais)<<endl;
    }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--) solve();
    return 0;
}