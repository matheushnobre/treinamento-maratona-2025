#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve(){
    int n, ans=0;
    string s;
    cin>>n;
    bool l=false;
    for(int i=0; i<n; i++){
      cin>>s;
      if(s == "login") l=true;
      else if(s == "logout") l=false;
      else if(s == "private" && l==false) ans++;
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