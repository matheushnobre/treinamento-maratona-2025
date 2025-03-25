#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve(){
    int n, k;
    cin>>n>>k;
    
    vector<vector<int>> matriz(n+1, vector<int>(n+1, 0));
    vector<vector<int>> prefix(n+1, vector<int>(n+1, 0));
    for(int i=1; i<=n; i++){
      for(int j=1; j<=n; j++){
        cin>>matriz[i][j];
        prefix[i][j] = prefix[i][j-1] + matriz[i][j];
      }
    }
    
    int ans = 0;
    for(int i=1; i<=n; i++){
      for(int j=1; j<=n; j++){
        int temp = prefix[i][min(n, j+k)] - prefix[i][max(0, j-k-1)];
        for(int ktemp=1; ktemp<=k; ktemp++){
          if(i - ktemp > 0)
            temp += prefix[i-ktemp][min(n, j+(k-ktemp))] - prefix[i-ktemp][max(0, j-(k-ktemp)-1)];
          if(i + ktemp <= n) 
            temp += prefix[i+ktemp][min(n, j+(k-ktemp))] - prefix[i+ktemp][max(0, j-(k-ktemp)-1)];
        }
        ans = max(ans, temp);
      }
    }
    
    cout<<ans<<endl;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    freopen("lazy.in", "r", stdin);
	freopen("lazy.out", "w", stdout);
    int t=1;
    //cin>>t;
    while(t--) solve();
    return 0;
}