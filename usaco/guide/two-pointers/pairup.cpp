#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve(){
    int n, x, y;
    cin>>n;
    vector<pair<int, int>> a(n);
    for(int i=0; i<n; i++)
      cin>>a[i].second>>a[i].first;
    
    
    sort(a.begin(), a.end());
    
    int ans=0;
    int l=0, r=n-1;
    while(l <= r){
      while(a[l].second > 0){
        int temp = a[l].second;
        a[l].second -= min(a[l].second, a[r].second);
        a[r].second -= min(a[r].second, temp);
        
        ans = max(ans, a[l].first + a[r].first);
        if(a[r].second == 0) r--;
      }
      l++;
    }
    
    cout<<ans<<endl;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    freopen("pairup.in", "r", stdin);
    freopen("pairup.out", "w", stdout);
    int t=1;
    //cin>>t;
    while(t--) solve();
    return 0;
}