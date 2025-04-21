#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve(){
    string s;
    cin>>s;
    int lastInd=0;;
    
    for(int i=1; i<s.size(); i++){
      if(s[i] != '0') lastInd = i;
    }
    
    int ans=s.size()-lastInd-1;
    for(int i=0; i<lastInd; i++){
      if(s[i] != '0') ans++;
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