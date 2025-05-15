#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve(){
   int a, b;
   cin>>a>>b;
   
   vector<int> v(a);
   for(int i=0; i<a; i++) cin>>v[i];
   
   sort(v.begin(), v.end());
   
   int valor;
   for(int i=0; i<b; i++){
     cin>>valor;
     int ans = upper_bound(v.begin(), v.end(), valor) - v.begin();
     cout<<ans<<" ";
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