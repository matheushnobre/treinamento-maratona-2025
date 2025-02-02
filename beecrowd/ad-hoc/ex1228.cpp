#include <bits/stdc++.h>
using namespace std;

void solve(int n){
    int v, ans=0;

    vector<int> grid(n+1), cheg(n+1);
    for(int i=0; i<n; i++)
        cin>>grid[i];
    for(int i=0; i<n; i++)
        cin>>cheg[i];

    vector<bool> passou(n+1);
    for(int i=0; i<n; i++){
        v = cheg[i];
        passou[v] = 1;
        for(int j=0; j<n; j++){
            if(grid[j] == v) break;
            else if(passou[grid[j]] == 0) ans++;
        }
    }

    cout<<ans<<endl;
}

int main(){
    ios::sync_with_stdio(0);
    int n;
    while(cin>>n){
        solve(n);
    }
}