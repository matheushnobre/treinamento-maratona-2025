#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve(){
    int n, ans=1e9+10;
    cin>>n;
    vector<int> a(n);
    for(int i=0; i<n; i++){
      cin>>a[i];
      if(i == 0) continue;
      int aux = a[i] - a[i-1];
      if(aux < 0) ans = 0;
      else ans = min(aux/2+1, ans);
    }
    
    cout<<ans<<endl;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--) solve();
    return 0;
}