#include <bits/stdc++.h>
using namespace std;

const int inf = 1e9+10;
int dp[200010][2];
bool r[200010][2];

// int answer(vector<int>& bolsa, int i, int taxa, bool estado){
//     if(i == bolsa.size()) return 0;
//     if(r[i][estado]) return dp[i][estado];

//     int ans=0;
//     if(estado == 0){
//         ans = max(answer(bolsa, i+1, taxa, 1) - bolsa[i] - taxa, answer(bolsa, i+1, taxa, 0));
//     } else{
//         ans = max(answer(bolsa, i+1, taxa, 0) + bolsa[i],  answer(bolsa, i+1, taxa, 1));
//     }

//     r[i][estado] = 1;
//     dp[i][estado] = ans;
//     return ans;
// }

void solve(){
    int n, c;
    cin>>n>>c;
    vector<int> bolsa(n);
    for(int i=0; i<n; i++) cin>>bolsa[i];

    dp[n][0] = 0;
    dp[n][1] = 0;
    for(int i=n-1; i>=0; i--){
        dp[i][0] = max(dp[i+1][1] - bolsa[i] - c, dp[i+1][0]);
        dp[i][1] = max(dp[i+1][0] + bolsa[i], dp[i+1][1]);
    }

    cout<<dp[0][0]<<endl;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}