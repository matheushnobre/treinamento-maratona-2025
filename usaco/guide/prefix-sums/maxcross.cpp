#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve(){
    int n, k, b;
    cin>>n>>k>>b;
    
    vector<int> a(n+1), p(n+1);
    for(int i=0; i<b; i++){
      int v; 
      cin>>v;
      a[v] = 1;
    }

    int ans = k;
    for(int i=1; i<=n; i++){
      p[i] = p[i-1] + a[i];
      if(i < k) continue;
      ans = min(ans, p[i] - p[i-k]);
    }
    
    cout<<ans<<endl;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    freopen("maxcross.in", "r", stdin);
    freopen("maxcross.out", "w", stdout);
    
    solve();
    return 0;
}