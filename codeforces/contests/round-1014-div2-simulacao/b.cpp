#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const int mod = 1e9+7;
const ll inf = 1e18;

void solve(){
    int n;
    string a, b;
    cin>>n>>a>>b;
    
    int i1=0, i0=0, p1=0, p0=0;
    for(int i=0; i<n; i++){
      if(i%2==0){
        if(a[i] == '1') p0++;
        if(b[i] == '0') p1++;
      } else{
        if(a[i] == '1') i0++;
        if(b[i] == '0') i1++;
      }
    }
    
    if(p0 <= i1 && i0 <= p1) cout<<"YES\n";
    else cout<<"NO\n";
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--) solve();
    return 0;
}