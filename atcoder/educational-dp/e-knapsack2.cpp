#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define MAX 100010
const ll INF = 1e9+10;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, w;
    cin>>n>>w;

    vector<vector<ll>> dp(n+1, vector<ll>(MAX, INF));

    ll ans = 0;
    dp[0][0] = 0;
    
    for(int i=1; i<=n; i++){
        ll peso, valor;
        cin>>peso>>valor;
        for(int j=0; j<MAX; j++){
            dp[i][j] = min(dp[i-1][j], dp[i][j]);
            if(dp[i][j] <= w) ans = max(static_cast<ll>(j), ans);
            if(j + valor < MAX){
                dp[i][j+valor] = min(dp[i-1][j+valor], dp[i-1][j]+peso);
            }
        }
    }

    cout<<ans<<endl;
    return 0;
}