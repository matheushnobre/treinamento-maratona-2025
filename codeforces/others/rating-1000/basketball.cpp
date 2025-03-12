#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve(){
    ll n, x;
    cin>>n>>x;
    vector<ll> a(n);
    
    for(int i=0; i<n; i++) cin>>a[i];
    
    sort(a.rbegin(), a.rend());
    int ans = 0;
    
    int i=0, j=n;
    while(i < j){
      int temp = a[i];
      while(temp <= x){
        j--;
        temp += a[i];
      }
      
      if(i >= j) break;
      ans++;
      i++; 
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