#include <bits/stdc++.h>
using namespace std;

const int mod = 1e9+7;

void solve(){
    int t, m, n;
    cin>>t>>m>>n;
    
    int dp[100000][2];

    // Inicializando valores da última coluna
    for(int i=m; i<=n; i++){
        if((i == m) | (i == n)) dp[i][1] = 1;
        else dp[i][1] = 2;
    }

    // Calculando outros valores
    for(int j=t-3; j>=0; j--){
        for(int i=m; i<=n; i++){
            if(i == m) dp[i][0] = dp[i+1][1];
            else if(i == n) dp[i][0] = dp[i-1][1];
            else dp[i][0] = (dp[i+1][1] + dp[i-1][1]) % mod;
        }

        for(int i=m; i<=n; i++){
            dp[i][1] = dp[i][0];
        } 
    }
    
    // Soma final
    int ans=0;
    for(int i=m; i<=n; i++){
        ans = (ans + dp[i][0]) % mod;
    }

    cout<<ans<<endl;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}