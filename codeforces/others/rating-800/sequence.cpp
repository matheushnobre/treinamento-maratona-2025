#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve(){
    int n;
    cin>>n;
    vector<int> a(n), ans;
    for(int i=0; i<n; i++){
      cin>>a[i];
      ans.push_back(a[i]);
      if(i > 0)
        if(a[i-1] > a[i]) ans.push_back(a[i]);
    }
    
    cout<<ans.size()<<endl;
    for(int i : ans) cout<<i<<" ";
    cout<<endl;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--) solve();
    return 0;
}