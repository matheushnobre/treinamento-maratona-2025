#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n, m;
    cin>>n>>m;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(i==n-1&&j==m-1) cout<<"W";
            else cout<<"B";
        } cout<<endl;
    }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin>>t;
    while(t--) solve();
    return 0;
}