#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve(){
    int n; 
    cin>>n;
    int pref[n+1][3];
    memset(pref, 0, sizeof(pref));
    
    for(int i=1; i<=n; i++){
      char c; cin>>c;
      for(int j=0; j<3; j++) pref[i][j] = pref[i-1][j];
      if(c == 'H') pref[i][0]++;
      else if(c == 'P') pref[i][1]++;
      else pref[i][2]++;
    }
    
    int ans = 0;
    for(int i=1; i<=n; i++){
      ans = max(ans, pref[i][1] + pref[n][0] - pref[i][0]);
      ans = max(ans, pref[i][1] + pref[n][2] - pref[i][2]);
      ans = max(ans, pref[i][2] + pref[n][0] - pref[i][0]);
      ans = max(ans, pref[i][2] + pref[n][1] - pref[i][1]);
      ans = max(ans, pref[i][0] + pref[n][1] - pref[i][1]);
      ans = max(ans, pref[i][0] + pref[n][2] - pref[i][2]);
    }
    
    cout<<ans<<endl;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    freopen("hps.in", "r", stdin);
    freopen("hps.out", "w", stdout);
    
    solve();
    return 0;
}