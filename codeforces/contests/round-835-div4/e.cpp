#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const int mod = 1e9+7;

void solve(){
    int n;
    ll ans = 0;
    cin>>n;
    vector<int> a(n);
    for(int i=0; i<n; i++) cin>>a[i];
    
    ll temp=0, z=0;
    for(int i=n-1; i>=0; i--){
      if(a[i] == 0) z++;
      else temp += z;
    }
    ans = max(ans, temp);
    
    temp=0, z=0;
    bool mudou=false;
    for(int i=n-1; i>=0; i--){
      if(a[i] == 0) z++;
      else{
        if(!mudou) {
          z++;
          mudou=true;
        }
        else temp += z;
      }
    }
    ans = max(ans, temp);
    
    for(int i=0; i<n; i++){
      if(a[i] == 0){
        a[i] = 1;
        break;
      }
    }
    
    temp=0, z=0;
     for(int i=n-1; i>=0; i--){
      if(a[i] == 0) z++;
      else temp += z;
    }
    ans = max(ans, temp);
    
    cout<<ans<<endl;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t=1;
    cin>>t;
    while(t--) solve();
    return 0;
}