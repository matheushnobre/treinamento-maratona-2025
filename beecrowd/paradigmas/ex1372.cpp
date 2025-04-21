#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve(int n, int m){
    if(n == 0) return;
    vector<ll> fim(n);
    
    for(int i=0; i<n; i++){
      vector<int> aux(m);
      for(int j=0; j<m; j++){
        cin>>aux[j];
      }
      
      ll dp[m][2]=  {0};
      dp[m-1][0] = aux[m-1], dp[m-1][1] = 0;
      for(int j=m-2; j>=0; j--){
        dp[j][0] = aux[j] + dp[j+1][1];
        dp[j][1] = max(dp[j+1][0],  dp[j+1][1]);
      }
      
      fim[i] = max(dp[0][0], dp[0][1]);
    }
    
    ll dp[n][2]=  {0};
    dp[n-1][0] = fim[n-1], dp[n-1][1] = 0;
    for(int j=n-2; j>=0; j--){
      dp[j][0] = fim[j] + dp[j+1][1];
      dp[j][1] = max(dp[j+1][0],  dp[j+1][1]);
    }
      
    cout<<max(dp[0][0], dp[0][1])<<endl;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, m;
    while(cin>>n>>m) solve(n, m);
    return 0;
}