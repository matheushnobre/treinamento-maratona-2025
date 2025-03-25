#include <bits/stdc++.h>
using namespace std;

#define MAX 1000
typedef long long ll;

void solve(){
    int n, k;
    cin>>n>>k;
    
    int prefix[MAX+1][MAX+1];
    memset(prefix, sizeof(prefix), 0);
    for(int i=0; i<n; i++){
      int x1, y1, x2, y2;
      cin>>x1>>y1>>x2>>y2;
      prefix[x1][y1]++;
      prefix[x1][y2]--;
      prefix[x2][y1]--;
      prefix[x2][y2]++;
    }
    
    int ans=0;
    for(int x=0; x<MAX; x++){
      for(int y=0; y<MAX; y++){
        if(x > 0) prefix[x][y] += prefix[x-1][y];
        if(y > 0) prefix[x][y] += prefix[x][y-1];
        if(x > 0 && y > 0) prefix[x][y] -= prefix[x-1][y-1];
        if(prefix[x][y] == k) ans++;
      } 
    }
    
    cout<<ans<<endl;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    freopen("paintbarn.in", "r", stdin);
	freopen("paintbarn.out", "w", stdout);
    int t=1;
    //cin>>t;
    while(t--) solve();
    return 0;
}