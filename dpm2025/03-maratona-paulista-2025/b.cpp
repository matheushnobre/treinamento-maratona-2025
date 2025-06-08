#include <bits/stdc++.h>
using namespace std;

#define MAXN 100010
const int INF = 1e9+10;
typedef long long ll;
typedef pair<ll,ll> pii;

ll n, m, k;
vector<vector<pii>> grafo(MAXN);
vector<ll> demora(MAXN, INF);
vector<int> visitados;
vector<ll> distancias;
vector<ll> pessoas;

void marcarDemoras(){
    priority_queue<vector<ll>> fila;

    for(ll p : pessoas){
        for(pii vz : grafo[p]){
            fila.push({-vz.second*2, p, vz.first});
        }
    }

    while(!fila.empty()){
        vector<ll> atual = fila.top();
        fila.pop();

        if(demora[atual[2]] == INF){
            demora[atual[2]] = -atual[0];
            for(pii vz : grafo[atual[2]]){
                fila.push({-(-atual[0] + vz.second*2), atual[1], vz.first});
            }
        }
    }
}

int dijkstra(int origem, int destino, ll m){
    visitados.assign(n+1, 0);
    distancias.assign(n+1, INF);

    distancias[origem] = -m;
	priority_queue<pii, vector<pii>, greater<pii>> fila; 
	fila.push({-m, origem});

	while (!fila.empty()){
		ll v_atual = fila.top().second;
        fila.pop();

        if(visitados[v_atual]) continue;

        visitados[v_atual] = 1;

        for(auto V : grafo[v_atual]){
            ll vz = V.first;
            ll dist = V.second;

            if(distancias[vz] > distancias[v_atual] + dist && distancias[v_atual] + dist <= demora[vz]){
                distancias[vz] = distancias[v_atual] + dist;
                fila.push({distancias[vz], vz});
            }
        }
	}

    return distancias[destino] <= demora[destino];
}

void solve(){
    cin>>n>>m>>k;

    for(int i=0; i<m; i++){
        ll a, b, c;
        cin>>a>>b>>c;
        grafo[a].push_back({b, c});
        grafo[b].push_back({a, c});
    }

    for(int i=0; i<k; i++){
        ll p;
        cin>>p;
        pessoas.push_back(p);
        demora[p] = 0;
    }

    marcarDemoras();
    ll maiorDemora = 0;
    for(ll i : demora) maiorDemora = max(maiorDemora, i);
    ll l = 0, r = maiorDemora + 10;
    ll ans = r;
    while(l <= r){
        ll m = (l + r) / 2;
        if(dijkstra(1, n, m)){
            ans = m;
            r = m-1;
        } else{
            l = m+1;
        }
    }

    cout<<ans<<endl;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}