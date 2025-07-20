#include <bits/stdc++.h>
using namespace std;

#define MAXN 3000

int n;
double a[MAXN];
double dp[MAXN][MAXN];

double solve(int cnt, int i){
    if(i >= n) 
        return (cnt == 0);
    
    if(dp[cnt][i] != -1) 
        return dp[cnt][i];
    

    dp[cnt][i] = 0;
    if(cnt > 0) dp[cnt][i] += a[i] * solve(cnt-1, i+1);
    dp[cnt][i] += (1-a[i]) * solve(cnt, i+1);

    return dp[cnt][i];
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    // lê entrada
    cin>>n;
    for(int i=0; i<n; i++) cin>>a[i];

    // inicializa dp com -1
    for(int i=0; i<MAXN; i++)
        for(int j=0; j<MAXN; j++)
                dp[i][j] = -1;

    // calcula resposta
    double ans = 0;
    for(int i=n/2+1; i<=n; i++)
        ans += solve(i, 0);
    

    cout<<fixed<<setprecision(10)<<ans<<endl;

    return 0;
}