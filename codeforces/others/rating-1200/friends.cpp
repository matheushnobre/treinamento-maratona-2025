#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve(){
    int n;
    cin>>n;
    
    vector<int> a(n), b(n), c(n);
    for(int i=0; i<n; i++) cin>>a[i];
    for(int i=0; i<n; i++){
      cin>>b[i];
      c[i] = b[i] - a[i];
    }
    
    sort(c.begin(), c.end());
    int ans = 0;
    int i=0, j=n-1;
    while(i < j){
      if(c[i] + c[j] >= 0){
        ans++;
        i++; j--;
      } else{
        i++;
      }
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