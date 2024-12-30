#include <bits/stdc++.h>
using namespace std;

#define MAXN 200010
#define INF 9999999
vector<int> jog;
vector<vector<int>> dp(10);
vector<vector<bool>> feito(10);

int solve(bool jogador, int index, int n){
    if(index >= n) return 0;
    if(feito[jogador][index]) return dp[jogador][index];

    int saida = INF;
    if(jogador == 1) {
        saida = min(saida, solve(0, index+1, n));
        saida = min(saida, solve(0, index+2, n));
    }
    else{
        if(jog[index] == 1) saida = min(saida, 1+solve(1, index+1, n));
        else if(jog[index] == 0) saida = min(saida, solve(1, index+1, n));
        
        if(index != n-1 && jog[index] == 1 && jog[index+1] == 1) saida = min(saida, 2 + solve(1, index+2, n));
        else if(index != n-1 && jog[index] == 1 && jog[index+1] == 0) saida = min(saida, 1 + solve(1, index+2, n));      
        else if(index != n-1 && jog[index] == 0 && jog[index+1] == 1) saida = min(saida, 1 + solve(1, index+2, n));      
        else if(index != n-1 && jog[index] == 0 && jog[index+1] == 0) saida = min(saida, solve(1, index+2, n));      
    }

    feito[jogador][index] = true;
    dp[jogador][index] = saida;
    return saida;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t, n;
    cin>>t;

    while(t--){
        cin>>n;
        jog.resize(n);
        dp.resize(2);
        feito.resize(2);
        for(int i=0; i<2; i++){
            dp[i].clear();
            dp[i].resize(n);
            feito[i].clear();
            feito[i].resize(n);
        }
        
        for(int i=0; i<n; i++) cin>>jog[i];
        cout<<solve(0, 0, n)<<endl;
    }

    return 0;
}