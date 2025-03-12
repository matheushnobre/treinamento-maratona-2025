#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve(){
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0; i<n; i++) cin>>v[i];
    
    vector<int> a1(n), a2(n);
    int c=1;
    for(int i=0; i<n; i++){
      a1[i] = min(c, v[i]);
      c = a1[i]+1;
    }
    
    c=1;
    for(int j=n-1; j>=0; j--){
      a2[j] = min(c, v[j]);
      c = a2[j]+1;
    }
    
    int ans = 0;
    for(int i=0; i<n; i++) 
      ans = max(min(a1[i], a2[i]), ans);
    
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