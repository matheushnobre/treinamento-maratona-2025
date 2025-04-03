#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n, v, a, ans=0;
    cin>>n>>v>>a;
    
    int grafo[v][v];
    memset(grafo, 0, sizeof(grafo));
    for(int i=0; i<a; i++){
        int a, b;
        cin>>a>>b;
        if(grafo[a][b] == 0) ans +=2;
        grafo[a][b] = 1;
        grafo[b][a] = 1;
    }

    cout<<ans<<endl;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--) solve();
    return 0;
}