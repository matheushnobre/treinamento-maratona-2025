#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n, q, v;
    cin>>n>>q;
    int cows[3][n+1];
    memset(cows, 0, sizeof(cows));
    for(int i=1; i<=n; i++){
        cin>>v;
        for(int j=0; j<3; j++){
            if(j == v-1) cows[j][i] = cows[j][i-1] + 1;
            else cows[j][i] = cows[j][i-1];
        }
    }

    int a, b;
    while(q--){
        cin>>a>>b;
        for(int i=0; i<3; i++){
            cout<<cows[i][b] - cows[i][a-1];
            if(i != 2) cout<<" ";
        } cout<<endl;
    }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    freopen("bcount.in", "r", stdin);
    freopen("bcount.out", "w", stdout);
    
    solve();
    return 0;
}