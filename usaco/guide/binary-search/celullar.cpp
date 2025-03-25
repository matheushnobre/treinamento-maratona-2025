#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve(){
    int n, m;
    cin>>n>>m;
    vector<int> c(n), t(m);
    for(int i=0; i<n; i++) cin>>c[i];
    for(int i=0; i<m; i++) cin>>t[i];
    int  ans=0;
    
    for(int i=0; i<n; i++){
      int index = lower_bound(t.begin(), t.end(), c[i]) - t.begin();
      int temp;
      if(index == 0) temp = abs(t[index] - c[i]);
      else if(index >= m) temp = abs(c[i] - t[index-1]);
      else temp = min(abs(t[index] - c[i]), abs(c[i] - t[index-1]));
      
      ans = max(ans, temp);
    }
    
    cout<<ans<<endl;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t=1;
    //cin>>t;
    while(t--) solve();
    return 0;
}