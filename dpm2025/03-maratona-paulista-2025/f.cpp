#include <bits/stdc++.h>
using namespace std;

#define MAX 100010
int n, k, maiornivel=0;

vector<int> temp(MAX);
vector<int> v(MAX);

vector<vector<int>> grafo(MAX);

int dfs(int i, int nivel){
    if(v[i]) return 0;
    if(temp[i]) maiornivel = max(maiornivel, nivel);
    v[i] = 1;
    int t = 0;
    for(int vz : grafo[i]){
        t += dfs(vz, nivel+1);
    }  
    int aux = temp[i];
    if(t > 0) aux = 1;
    if(i == 1) return t;
    else if(aux) return t + 1;
    return 0;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin>>n>>k;
    for(int i=1; i<=n; i++){
        int x;
        cin>>x;
        if(x > k) temp[i] = 1;
    }
    
    //for(int i=1; i<=n; i++){
    //  cout<<"i ="<<i<<", temp = "<<temp[i]<<endl;
  //  }
    
    for(int i=0; i<n-1; i++) {
        int x, y;
        cin>>x>>y;
        grafo[x].push_back(y);
        grafo[y].push_back(x);
    }
    
    int ans = dfs(1, 0);
    ans *= 2;
    ans -= maiornivel;
    cout<<ans<<endl;

    return 0;
}