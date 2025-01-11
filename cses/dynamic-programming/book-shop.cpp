#include <bits/stdc++.h>
using namespace std;

#define MAX 1010
#define MAXX 100010

int main(){
    int prices[MAX], pages[MAX], dp[MAX][MAXX];
    int n, x;
    cin>>n>>x;
    for(int i=1; i<=n; i++) cin>>prices[i];
    for(int i=1; i<=n; i++) cin>>pages[i];

    for(int i=1; i<=n; i++){
        int p = prices[i], pp = pages[i];
        for(int j=0; j<=x; j++){
            if(j < p) dp[i][j] = dp[i-1][j];
            else dp[i][j] = max(dp[i-1][j], dp[i-1][j-p] + pp);
        } 
    }

    cout<<dp[n][x]<<endl;
}