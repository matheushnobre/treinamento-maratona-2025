#include <bits/stdc++.h>
using namespace std;

#define MAX 1000010
typedef long long ll;
const int mod = 1e9+7;

int main(){
    ll dp[MAX][2];
    dp[1][0] = dp[1][1] = 1;
    
    for(int i=2; i<MAX; i++){
        dp[i][0] = (((dp[i-1][0] * 4) % mod) + dp[i-1][1]) % mod;
        dp[i][1] = (dp[i-1][0] + ((dp[i-1][1]*2) % mod)) % mod;
    }

    int t, n;
    cin>>t;
    for(int i=0; i<t; i++){
        cin>>n;
        cout<<(dp[n][0] + dp[n][1])%mod<<endl;
    }

    return 0;
}