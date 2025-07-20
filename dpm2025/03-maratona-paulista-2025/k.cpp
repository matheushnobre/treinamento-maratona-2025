#include <bits/stdc++.h>
using namespace std;

#define MAXN 4010
typedef long long ll;

const ll mod = 998244353;
int n, k;
int dp[MAXN][MAXN];

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    cin>>n>>k;
    for(int i=0; i<=n; i++)
        for(int j=0; j<=n; j++)
            dp[i][j] = 0;

    for(int j=0; j<=n; j++) dp[0][j] = 1;

    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            if(j > i) dp[i][j] = dp[i][j-1];
            else if(j == k) dp[i][j] = dp[i][j-1];
            else if(j == 1) dp[i][j] = 1 + dp[i][j-1];
            else if(i == j) dp[i][j] = 1 + dp[i][j-1];
            else dp[i][j] = dp[i][j-1] + dp[i-j][min(i-j, j)];
            dp[i][j] %= mod;
        }
    }

    cout<<dp[n][n]<<endl;

    return 0;
}