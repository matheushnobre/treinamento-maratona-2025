#include <bits/stdc++.h>
using namespace std;

int dfs(int i, int n, vector<vector<int>>& matriz, vector<int> np){
    int ret = 1;
    for(int j=1; j<=n; j++) if(matriz[i][j] == 0) np[j] = 1;
    for(int j=i+1; j<=n; j++){
        if(matriz[i][j] == 1 && np[j] == 0){
            ret = max(ret, 1+dfs(j, n, matriz, np));
        }
    }
    return ret;
}

void solve(int n, int test){
    if(n == 0) return;

    vector<vector<int>> matriz(n+1, vector<int>(n+1, 1));
    matriz[0][0] = 0;
    for(int i=1; i<=n; i++){
        int j=-1;
        while(j!=0){
            cin>>j;
            matriz[i][j] = 0;
            matriz[j][i] = 0;
        }
    }

    // for(int i=0; i<=n; i++){
    //     for(int j=0; j<=n; j++){
    //         cout<<matriz[i][j]<<" ";
    //     } cout<<endl;
    // }

    int ans = 1;
    for(int i=1; i<=n; i++){
        vector<int> np(n+1);
        ans = max(ans, dfs(i, n, matriz, np));
    }

    cout<<"Teste "<<test<<endl;
    cout<<ans<<endl<<endl;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, test=1;
    while(cin>>n)
        solve(n, test++);
    return 0;
}