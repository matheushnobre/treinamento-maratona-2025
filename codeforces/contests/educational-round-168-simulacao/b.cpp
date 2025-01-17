#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    char e[2][n];
    for(int i=0; i<2; i++)
        for(int j=0; j<n; j++)
            cin>>e[i][j];

    int ans=0;
    for(int j=1; j<n-1; j++){
        if(e[1][j-1] == 'x' && e[1][j+1] == 'x' && e[1][j] == '.' && e[0][j] == '.' && e[0][j-1] != 'x' && e[0][j+1] != 'x') ans++;
        if(e[0][j-1] == 'x' && e[0][j+1] == 'x' && e[0][j] == '.' && e[1][j] == '.' && e[1][j-1] != 'x' && e[1][j+1] != 'x') ans++;
    }

    cout<<ans<<endl;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t; cin>>t;
    while(t--) solve();
    return 0;
}