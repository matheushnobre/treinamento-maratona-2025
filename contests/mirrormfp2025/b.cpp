#include <bits/stdc++.h>
using namespace std;

#define MAX 200010
vector<int> ciclos(MAX, -1);
vector<vector<int>> grafo(MAX);

int dfs(int i, int c){
    if(ciclos[i] != -1) return 0;
    ciclos[i] = c;
    for(int vz : grafo[i]){
        dfs(vz, c);
    }
    return 0;
}

int main(){
    int n, m;
    cin>>n>>m;

    while(m--){
        int x, y;
        cin>>x>>y;
        grafo[x].push_back(y);
        grafo[y].push_back(x);
    }

    int c=0;
    for(int i=1; i<=n; i++){
        if(ciclos[i] == -1){
            dfs(i, c);
            c++;
        }
    }

    if(c == 1 && m == n-1){
        cout<<"BOM"<<endl;
    } else{
        m = m+c+-1;
        cout<<"RUIM"<<" "<<m-(n-1)<<" "<<c-1<<endl;
    }
    return 0;
}