#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve(){
    int n;
    cin>>n;
    vector<int> a(n), b(n);
    for(int i=0; i<n; i++) cin>>b[i];
    for(int i=0; i<n; i++) cin>>a[i];
    
    sort(a.rbegin(), a.rend());
    sort(b.rbegin(), b.rend());
    int j=0, ans=0;
    for(int i=0; i<n; i++){
      while(a[i] <= b[j]){
        j++;
        if(j >= n) break;
      }
      if(j >= n) break;
      ans++;
      j++;
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