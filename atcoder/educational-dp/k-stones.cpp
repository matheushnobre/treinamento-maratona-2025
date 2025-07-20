#include <bits/stdc++.h>
using namespace std;

#define MAXK 100010
vector<int> a;
int n, k;
int dp[2][MAXK];

int solve(int j, int fj){
    if(dp[j][fj] != -1) return dp[j][fj];
    int aux = (j == 0);

    for(int i=0; i<n; i++){
        if(fj >= a[i]){
            if(j == 0) aux = min(aux, solve(1, fj-a[i]));
            else aux = max(aux, solve(0, fj-a[i]));
        }
    }

    return dp[j][fj] = aux;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin>>n>>k;

    for(int i=0; i<n; i++){
        int x;
        cin>>x;
        a.push_back(x);
    }

    memset(dp, -1, sizeof(dp));
    dp[0][0] = 1;
    dp[1][0] = 0;
    
    if(solve(0, k)) cout<<"Second"<<endl;
    else cout<<"First"<<endl;
    return 0;
}