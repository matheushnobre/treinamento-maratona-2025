#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n, m;
    cin>>n>>m;
    int matriz[n][m];
    int maior=0;

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin>>matriz[i][j];
            maior = max(maior, matriz[i][j]);
        }
    }

    int cnt=0;
    vector<int> linhas(n), colunas(m);
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(matriz[i][j] == maior){
                linhas[i]++;
                colunas[j]++;
                cnt++;
            }
        }
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            int temp = linhas[i];
            temp += colunas[j];
            if(matriz[i][j] == maior) temp -= 1;
            if(temp >= cnt){
                cout<<maior-1<<endl;
                return;
            }
        }
    }

    cout<<maior<<endl;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t=1;
    cin>>t;
    while(t--) solve();
    return 0;
}