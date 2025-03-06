#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll dist(int x1, int y1, int x2, int y2){
  ll a1 = abs(x1-x2);
  ll a2 = abs(y1-y2);
  return a1+a2;
}

void solve(){
    int n, k, a, b;
    cin>>n>>k>>a>>b;
    
    vector<pair<ll, ll>> c(n+1);
    for(int i=1; i<=n; i++)
      cin>>c[i].first>>c[i].second;
      
    if(k == 0){
      cout<<dist(c[a].first, c[a].second, c[b].first, c[b].second)<<endl;
      return;
    }
      
    if(a <= k && b <= k){
      cout<<0<<endl;
    } else if(a <= k && b > k){
      ll ans = dist(c[a].first, c[a].second, c[b].first, c[b].second);
      for(int i=1; i<=k; i++){
        ans = min(ans, dist(c[i].first, c[i].second, c[b].first, c[b].second));
      }
      cout<<ans<<endl;
    } else{
      ll ans = dist(c[a].first, c[a].second, c[b].first, c[b].second);
      ll o1 = 1e18, o2=1e18;
      for(int i=1; i<=k; i++){
        o1 = min(o1, dist(c[a].first, c[a].second, c[i].first, c[i].second));
        o2 = min(o2, dist(c[i].first, c[i].second, c[b].first, c[b].second));
      }
      ans = min(ans, o1+o2);
      cout<<ans<<endl;
    }
    
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--) solve();
    return 0;
}