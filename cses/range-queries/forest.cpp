// Prefix Sum 2D

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve(){
    int n, q;
    char c;
    cin>>n>>q;
    vector<vector<int>> p(n+1, vector<int> (n+1));
    for(int i=1; i<=n; i++){
      for(int j=1; j<=n; j++){
        cin>>c;
        p[i][j] = p[i][j-1] + p[i-1][j] - p[i-1][j-1];
        if(c == '*') p[i][j]++;
      }
    }
    
    int y1, x1, y2, x2;
    for(int i=0; i<q; i++){
      cin>>x1>>y1>>x2>>y2;
      cout<<p[x2][y2] - p[x2][y1-1] - p[x1-1][y2] + p[x1-1][y1-1]<<endl;
    }
    
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t=1;
    //cin>>t;
    while(t--) solve();
    return 0;
}