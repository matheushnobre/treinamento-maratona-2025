#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve(){
   int n, m, o;
   cin>>n>>m;
   
   vector<int> f(n), p(n);
   for(int i=1; i<n; i++) cin>>f[i];
   for(int i=0; i<n; i++) cin>>p[i];
   
   for(int i=0; i<m; i++){
     cin>>o;
     int idx = upper_bound(f.begin(), f.end(), o) - f.begin();
     cout<<p[idx-1]<<" ";
   } cout<<endl;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t=1;
    //cin>>t;
    while(t--) solve();
    return 0;
}