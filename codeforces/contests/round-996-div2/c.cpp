#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve(){
    int n, m; 
    string s;
    cin>>n>>m>>s;
    ll matriz[n][m];
    ll slinha[n], scol[m];
    for(int i=0; i<n; i++) slinha[i] = 0;
    for(int i=0; i<m; i++) scol[i] = 0;

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin>>matriz[i][j];
            slinha[i] += matriz[i][j];
            scol[j] += matriz[i][j];
        }
    }

    int iatual=0, jatual=0;
    for(char c : s){
        if(c == 'D'){
            matriz[iatual][jatual] = -slinha[iatual];
            scol[jatual] += matriz[iatual][jatual];
            iatual++;
        } else{
            matriz[iatual][jatual] = -scol[jatual];
            slinha[iatual] += matriz[iatual][jatual];
            jatual++;
        }
    }

    matriz[n-1][m-1] = -slinha[n-1];

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cout<<matriz[i][j]<<" ";
        }
        cout<<endl;
    }
}

int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    int t; cin>>t;
    while(t--) solve();
    return 0;
}