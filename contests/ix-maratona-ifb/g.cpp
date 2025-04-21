#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve(){
    int n, k;
    cin>>n>>k;
    vector<pair<int, int>> p;
    
    for(int i=0; i<n; i++){
      int l, r, g;
      cin>>l>>r>>g;
      p.push_back({l, g});
      p.push_back({r+1, -g});
    }
    
    sort(p.begin(), p.end());
    
    ll ans=0;
    ll temp=0;
    int qtd=0;
    
    for(int i=0; i<2*n; i++){
      temp += p[i].second;
      if(p[i].second > 0) qtd++;
      else qtd--;
      
      if((i != 2*n-1 && p[i+1].first != p[i].first) || (i == 2*n-1)){
        if(qtd <= k) ans = max(ans, temp);
      }
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