#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n, m, q, s;
    cin>>n>>m;
    int matriz[n+1][m+1];
    int p[n+1][m+1];
    memset(p, 0, sizeof(p));

    for(int i=1; i<=n; i++){
        for(int j=1; j<=m; j++){
            cin>>matriz[i][j];
            p[i][j] = p[i][j-1] + p[i-1][j] - p[i-1][j-1];
            if(matriz[i][j] == 0){
                p[i][j]++;
            }
        }
    }

    cin>>q;
    while(q--){
        cin>>s;
        string saida = "no";
        for(int i=s; i<=n; i++){
            for(int j=s; j<=m; j++){
                if(p[i][j] - p[i][j-s] - p[i-s][j] + p[i-s][j-s] == 0) saida="yes";
            }
        }
        cout<<saida<<endl;
    }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}