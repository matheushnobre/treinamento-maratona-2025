#include <bits/stdc++.h>
using namespace std;

#define MAXN 500010
typedef long long ll;
typedef pair<ll, ll> pii;
typedef tuple<ll, ll, ll> t;

int n, c, p;
const ll INF = 1e18;
vector<vector<pii>> carro(MAXN);
vector<vector<pii>> pe(MAXN);

ll distancias[MAXN][3]; // 0 pra quando estiver a pé pela primeira vez, 1 de carro e 2 quando for a pé no final
ll visitados[MAXN][3];

ll dijkstra(int origem, int destino){
    for(int i=0; i<3; i++)
        distancias[origem][i] = 0;

    priority_queue<t, vector<t>, greater<t>> fila;
    for(int i=0; i<2; i++) 
        fila.push({0, origem, i});

    while(!fila.empty()){
        t atual = fila.top();
        fila.pop();

        ll dist = get<0>(atual), vertice = get<1>(atual), formato = get<2>(atual);
        if(visitados[vertice][formato]) continue;
        visitados[vertice][formato] = 1;
        
        if(formato != 2){
            for(auto& V : carro[vertice]){
                ll vz = V.first, peso = V.second;
                if(distancias[vz][1] > dist+peso){
                    distancias[vz][1] = dist+peso;
                    fila.push({dist+peso, vz, 1});
                }
            }
        }

        for(auto& V : pe[vertice]){
            ll vz = V.first, peso = V.second;
            if(formato == 0){
                if(distancias[vz][0] > dist+peso){
                    distancias[vz][0] = dist+peso;
                    fila.push({dist+peso, vz, 0LL});
                }
            } else{
                if(distancias[vz][2] > dist+peso){
                    distancias[vz][2] = dist+peso;
                    fila.push({dist+peso, vz, 2});
                }
            }
        }

    }

    ll retorno = min(distancias[destino][0], distancias[destino][1]);
    retorno = min(retorno, distancias[destino][2]);
    return retorno;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    cin>>n>>c>>p;

    // inicializa distancias
    for(int i=0; i<=n; i++){
        for(int j=0; j<3; j++){
            distancias[i][j] = INF;
            visitados[i][j] = 0;
        }
    }

    for(int i=0; i<c; i++){
        ll a, b, p;
        cin>>a>>b>>p;
        carro[a].push_back({b, p});
    }

    for(int i=0; i<p; i++){
        ll a, b, p;
        cin>>a>>b>>p;
        pe[a].push_back({b, p});
        pe[b].push_back({a, p});
    }

    cout<<dijkstra(1, n)<<endl;

    return 0;
}