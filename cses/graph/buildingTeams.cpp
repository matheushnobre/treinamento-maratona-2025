#include <bits/stdc++.h>
using namespace std;

#define MAXN 100010

vector<vector<int>> grafo(MAXN);
vector<int> times(MAXN, 0);
bool impossivel = false;

bool dfs(int x, int v){
    if (times[x] == 0) times[x] = v;
    else if(times[x] == v) return true;
    else {
        impossivel = true;
        return false;
    }

    for(int t : grafo[x]){
        dfs(t, 3-v);
    }
        
    return true;
}

int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    int n, m, a, b;
    cin>>n>>m;

    for(int i=0; i<m; i++){
        cin>>a>>b;
        grafo[a-1].push_back(b-1);
        grafo[b-1].push_back(a-1);
    }

    for(int i=0; i<n; i++){
        if(times[i] == 0)
            dfs(i, 1);
        if(impossivel){
            cout<<"IMPOSSIBLE";
            return 0;
        }
    }

    for(int i=0; i<n; i++)
        cout<<times[i]<<" ";
    cout<<endl;

    return 0;    
}