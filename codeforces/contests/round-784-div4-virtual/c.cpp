#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve(){
    int n;
    cin>>n;
    vector<int> a(n);
    
    for(int i=0; i<n; i++) cin>>a[i];
    
    for(int i=2; i<n; i++){
      if(a[i] % 2 != (a[i-2]%2)){
        cout<<"NO"<<endl;
        return;
      }
    }
    cout<<"YES"<<endl;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--) solve();
    return 0;
}