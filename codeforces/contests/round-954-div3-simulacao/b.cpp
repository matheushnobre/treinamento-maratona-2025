#include <bits/stdc++.h>
using namespace std;

bool isValid(int i, int j, int n, int m){
    return (i>=0 && j>=0 && i<n && j<m);
}

void solve(){
    int n, m;
    cin>>n>>m;
    int matriz[n][m];
    for(int i=0; i<n; i++) 
        for(int j=0; j<m; j++)
            cin>>matriz[i][j];

    int dx[4] = {1, -1, 0, 0};
    int dy[4] = {0, 0, 1, -1};
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            int mv = 0;
            for(int k=0; k<4; k++){
                if(isValid(i+dx[k], j+dy[k], n, m)) mv = max(mv, matriz[i+dx[k]][j+dy[k]]);
            }
            matriz[i][j] = min(matriz[i][j], mv); 
        }
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cout<<matriz[i][j]<<" ";
        } cout<<endl;
    }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t; cin>>t;
    while(t--) solve();
    return 0;
}