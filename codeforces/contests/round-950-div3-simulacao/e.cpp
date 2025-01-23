#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned int ui;
const int inf = 1e9+10;
const int mod = 1e9+7;

void solve(){
    int n, m, v;
    cin>>n>>m;
    vector<vector<int>> a(n), b(n);
    vector<int> linhas(n*m+1), colunas(n*m+1);

    bool saida=true;

    for(int i=0; i<n; i++){
        int menor=inf;
        for(int j=0; j<m; j++){
            cin>>v;
            a[i].push_back(v);
            menor = min(menor, v);
        }
        for(int j=0; j<m; j++)
            linhas[a[i][j]] = menor;
    }

    for(int i=0; i<n; i++){
        int menor=inf;
        for(int j=0; j<m; j++){
            cin>>v;
            b[i].push_back(v);
            menor = min(menor, v);
        }
        for(int j=0; j<m; j++){
            if(linhas[b[i][j]] != menor) saida=false;
        }
            
    }

    for(int j=0; j<m; j++){
        int menor=inf;
        for(int i=0; i<n; i++)
            menor = min(menor, a[i][j]);
        for(int i=0; i<n; i++)
            colunas[a[i][j]] = menor;
    }

    for(int j=0; j<m; j++){
        int menor=inf;
        for(int i=0; i<n; i++)
            menor = min(menor, b[i][j]);
        for(int i=0; i<n; i++)
            if(colunas[b[i][j]] != menor) saida=false;
    }

    if(saida) cout<<"YES\n";
    else cout<<"NO\n";

}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t=1;
    cin>>t;
    while(t--) solve();
    return 0;
}