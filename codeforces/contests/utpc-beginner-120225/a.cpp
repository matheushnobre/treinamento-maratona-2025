#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    string s, ans;
    vector<map<int, int>> freq(100);
    
    for(int i=0; i<n; i++){
      cin>>s;
      if(i == 0) ans = s;
      for(int j=0; j<s.size(); j++){
        if(s[j] != '.') ans[j] = s[j];
      }
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