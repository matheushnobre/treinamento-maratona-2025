#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned int ui;
const ll inf = 1e18+10;
const int mod = 1e9+7;

void solve(){
    int n, m, v;
    cin>>n>>m;
    bool saida=true;
    vector<int> answers(n);
    vector<vector<int>> vacas(n);
    
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin>>v;
            vacas[i].push_back(v);
        }
        sort(vacas[i].begin(), vacas[i].end());
        for(int j=1; j<m; j++){
            if(vacas[i][j]-vacas[i][j-1]!=n) saida=false;
        }
        if(saida) answers[vacas[i][0]] = i+1;
    }

    if(saida){
        for(int v : answers) cout<<v<<" ";
        cout<<endl;
    } else cout<<-1<<endl;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t=1;
    cin>>t;
    while(t--)
        solve();
    return 0;
}