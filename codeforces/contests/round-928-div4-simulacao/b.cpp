#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n; 
    cin>>n;

    int jminimo=100, jmaximo=-1, iminimo=100, imaximo=-1;
    char matriz[n][n];
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin>>matriz[i][j];
            if(matriz[i][j] == '1'){
                jminimo = min(jminimo, j);
                jmaximo = max(jmaximo, j);
                iminimo = min(iminimo, i);
                imaximo = max(imaximo, i);
            }
        }
    }

    bool square=true;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(j >= jminimo && j <= jmaximo && i >= iminimo && i<= imaximo && matriz[i][j] != '1'){
                square = false;
            }
        }
    }

    if(square) cout<<"SQUARE\n";
    else cout<<"TRIANGLE\n";
            
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t; cin>>t;
    while(t--) solve();
    return 0;
}