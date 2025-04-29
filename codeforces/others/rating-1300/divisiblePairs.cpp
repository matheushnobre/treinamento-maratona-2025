#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve(){
    int n, x, y, v;
    ll ans = 0;
    map<pair<int, int>, int> freq;
    cin>>n>>x>>y;
    
    for(int i=0; i<n; i++){
      cin>>v;
      int xaux = (x - v%x) % x;
      ans += freq[{xaux, v%y}];
      freq[{v%x, v%y}]++;
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