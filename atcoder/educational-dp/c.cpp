#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n; 
    cin>>n;
    int e[n][3];
    for(int i=0; i<n; i++)
        for(int j=0; j<3; j++)
            cin>>e[i][j];

    
    int dp[n][3];
    for(int j=0; j<3; j++)
        dp[0][j] = e[0][j];
    
    for(int i=1; i<n; i++){
        dp[i][0] = max(dp[i-1][1], dp[i-1][2]) + e[i][0];
        dp[i][1] = max(dp[i-1][0], dp[i-1][2]) + e[i][1];
        dp[i][2] = max(dp[i-1][0], dp[i-1][1]) + e[i][2];
    }

    int ans = 0;
    for(int j=0; j<3; j++)
        ans = max(ans, dp[n-1][j]);

    cout<<ans<<endl;

    return 0;
}


