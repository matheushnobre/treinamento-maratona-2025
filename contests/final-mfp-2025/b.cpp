#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

pair<ll, ll> f(int jog, int i, int n, vector<ll>&a, vector<vector<pair<ll, ll>>>& dp, vector<vector<int>>& resolvido){
    //cout<<"chamando jog = "<<jog<<", i = "<<i<<endl;
    if(i >= n) return {0, 0};
    if(resolvido[jog][i]) {
       // cout<<"jog = "<<jog<<", i = "<<i<<" ja foi resolvido => "<<dp[jog][i].first<<", "<<dp[jog][i].second<<endl;
        return dp[jog][i];
    }
  //  cout<<"nao esta resolvido"<<endl;
    // pegar o primeiro e não pegar o próximo
    ll op1=0, op2=0, oth1=0, oth2=0;
    if(jog == 0){
        pair<ll, ll> aux = f(1, i+1, n, a, dp, resolvido);
        op1 = a[i] + aux.first;
        oth1 = aux.second;
    } else{
        pair<ll, ll> aux = f(0, i+1, n, a, dp, resolvido);
        op1 = a[i] + aux.second;
        oth1 = aux.first;
    }

    // pegar o primeiro e o próximo
    if(i + 1 < n){
        if(jog == 0){
            pair<ll, ll> aux  = f(1, i+2, n, a, dp, resolvido);
            op2 = a[i] + a[i+1] + aux.first;
            oth2 = aux.second;
        } else{
            pair<ll, ll> aux  = f(0, i+2, n, a, dp, resolvido);
            op2 = a[i] + a[i+1] + aux.second;
            oth2 = aux.first;
        }
    }

    resolvido[jog][i] = 1;
    if(jog == 0){
        if(op1 >= op2){
            dp[jog][i] = {op1, oth1};
        } else{
            dp[jog][i] = {op2, oth2};
        }
    }
    else{
        if(op1 >= op2){
            dp[jog][i] = {oth1, op1};
        } else{
            dp[jog][i] = {oth2, op2};
        }
    }

   // cout<<"jog = "<<jog<<", i = "<<i<<endl;
    //cout<<"dp[jog][i] = "<<dp[jog][i].first<<", "<<dp[jog][i].second<<endl<<endl;
    return dp[jog][i];
}

void solve(){
    int n;
    cin>>n;
    vector<ll> a(n);
    for(int i=0; i<n; i++) 
        cin>>a[i];
    
    vector<vector<pair<ll, ll>>> dp(2, vector<pair<ll, ll>>(n));
    vector<vector<int>> resolvido(2, vector<int>(n));

    resolvido[0][n-1] = 1;
    resolvido[1][n-1] = 1;
    dp[0][n-1] = {a[n-1], 0};
    dp[1][n-1] = {0, a[n-1]};

    f(0, 0, n, a, dp, resolvido);

    cout<<dp[0][0].first<<endl;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t=1;
    cin>>t;
    while(t--) solve();
    return 0;
}