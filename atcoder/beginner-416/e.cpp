#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

const ll INF = 1e15;

void solve(){
    ll n, m, k, q;
    ll t;
    cin>>n>>m;

    // montagem do grafo
    ll grafo[n+1][n+1];
    for(int i=0; i<=n; i++) {
        for(int j=0; j<=n; j++) {
            if(i == j){
                grafo[i][j] = 0LL;
            } else{
                grafo[i][j] = INF;
            }
        }
    }
    
    // estradas
    for(int i=0; i<m; i++){
        ll a, b;
        ll peso;
        
        cin>>a>>b>>peso;
        grafo[a][b] = min(grafo[a][b], peso);
        grafo[b][a] = min(grafo[b][a], peso);
    }

    // aeroportos
    cin>>k>>t;
    for(int i=0; i<k; i++){
        int v; 
        cin>>v;
        grafo[v][0] = t;
        grafo[0][v] = 0LL;
    }

    // floyd warshall
    ll d[n+1][n+1];
    for (int i=0; i<=n; i++)
		for (int j=0; j<=n; j++)
			d[i][j] = grafo[i][j];

    // depuração: menor distancia
    // for(int i=0; i<=n; i++){
    //    for(int j=0; j<=n; j++){
    //        cout<<i<<" -> "<<j<<" = "<<d[i][j]<<endl;
    //    }
    // } cout<<endl<<endl;

	for (int k=0; k<=n; k++) 
		for (int i=0; i<=n; i++)
			for (int j=0; j<=n; j++)
				d[i][j] = min(d[i][j], d[i][k] + d[k][j]);

    // for(int i=0; i<=n; i++){
    //     cout<<"aeroporto mais proximo de "<<i<<" eh "<<dair[i]<<endl;
    // }
    
    // depuração: menor distancia
    // for(int i=0; i<=n; i++){
    //    for(int j=0; j<=n; j++){
    //        cout<<i<<" -> "<<j<<" = "<<d[i][j]<<endl;
    //    }
    // } cout<<endl<<endl;

    // consultas
    cin>>q;
    while(q--){
        int v;
        cin>>v;
        if(v == 1){
            // estrada adicionada
            ll x, y, peso;
            cin>>x>>y>>peso;

            //cout<<"estrada de "<<x<<" para "<<y<<" peso = "<<peso<<endl;

            if(d[x][y] >= peso) {
                d[x][y] = peso;
                d[y][x] = d[x][y];
            }

            for(int i=0; i<=n; i++){
                for(int j=0; j<=n; j++){
                    d[i][j] = min(d[i][j], d[i][x] + d[x][y] + d[y][j]);
                    d[i][j] = min(d[i][j], d[i][y] + d[y][x] + d[x][j]);
                }
            }

        } else if(v == 2){
            // aeroporto adicionado
            int x;
            cin>>x;
   
            if(d[x][0] >= t){
                d[x][0] = t;
            } if(d[0][x] > 0) d[0][x] = 0LL;
           
            for(int i=0; i<=n; i++){
                for(int j=0; j<=n; j++){
                    d[i][j] = min(d[i][j], d[i][x] + d[x][0] + d[0][j]);
                    d[i][j] = min(d[i][j], d[i][0] + d[0][x] + d[x][j]);
                }
            }

      
             // depuração: menor distancia
            // cout<<"estamos here"<<endl;
            // for(int i=0; i<=n; i++){
            //     for(int j=0; j<=n; j++){
            //         cout<<i<<" -> "<<j<<" = "<<d[i][j]<<endl;
            //     }
            // } cout<<endl<<endl;


        } else{
            ll ans = 0;
            for(int i=1; i<=n; i++){
                for(int j=1; j<=n; j++){
                    if(d[i][j] < INF) ans += d[i][j];
                }
            }

            // depuração: menor distancia
            // for(int i=1; i<=n; i++){
            //     for(int j=1; j<=n; j++){
            //         cout<<i<<" -> "<<j<<" = "<<d[i][j]<<endl;
            //     }
            // } cout<<endl<<endl;
            cout<<ans<<endl;
        }

        
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