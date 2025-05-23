#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define MAX 1000010
const int mod = 1e9+7;

int N;
ll dp[MAX][27];

int solve(int n, int k){
    if(n == N) return 1;
    if(dp[n][k] != -1) return dp[n][k];
    
    dp[n][k] = 1LL * k * solve(n+1, k);
    dp[n][k] %= mod;
    if(k < 26) dp[n][k] += solve(n+1, k+1);
    dp[n][k] %= mod;
    
    return dp[n][k];
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    memset(dp, -1, sizeof(dp));

    cin>>N;
    cout<<solve(1, 1)<<endl;
    
    return 0;
}