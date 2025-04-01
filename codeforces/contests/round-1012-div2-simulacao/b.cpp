#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define MAX 10010

int n, m;

int dfs1(int i, int j, vector<vector<char>>& matriz, vector<vector<int>>& v){
    if(i < 0 || j<0 || i>=n || j>=m) return 0;
    if(v[i][j] == 1) return 1;
    if(matriz[i][j] == '0') return 0;
    v[i][j] = 1;
    dfs1(i+1, j, matriz, v);
    return 1;
}

int dfs2(int i, int j, vector<vector<char>>& matriz, vector<vector<int>>& v){
    if(i < 0 || j<0 || i>=n || j>=m) return 0;
    if(v[i][j] == 2) return 1;
    if(matriz[i][j] == '0') return 0;
    v[i][j] = 2;
    dfs2(i, j+1, matriz, v);
    return 1;
}

void solve(){
    cin>>n>>m;
    vector<vector<char>> matriz(n, vector<char>(m));
    vector<vector<int>> v(n, vector<int>(m));
    for(int i=0; i<n; i++)
        for(int j=0; j<m; j++)
            cin>>matriz[i][j];

    for(int j=0; j<m; j++)
        dfs1(0, j, matriz, v);
    

    for(int i=0; i<n; i++)
        dfs2(i, 0, matriz, v);
    
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(matriz[i][j] == '1' && !v[i][j]){
                cout<<"NO\n";
                return;
            }
        }
    }

    cout<<"YES\n";
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t=1;
    cin>>t;
    while(t--) solve();
    return 0;
}