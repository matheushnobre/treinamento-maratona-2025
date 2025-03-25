#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const int mod = 1e9+7;

void solve(){
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0; i<n; i++) cin>>a[i];
    bool sub=false;
    
    for(int i=1; i<n; i++){
      if(a[i] < a[i-1] && sub){
        cout<<"NO\n";
        return;
      } else if(a[i] > a[i-1]){
        sub=true;
      }
    }
    
    cout<<"YES\n";
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t=1;
    cin>>t;
    while(t--) solve();
    return 0;
}