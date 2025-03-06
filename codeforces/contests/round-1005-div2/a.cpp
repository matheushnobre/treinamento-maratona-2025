#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const int inf=1e10;
const int mod=1e9+7;

void solve(){
    int n; string s;
    cin>>n>>s;
    
    int ans=0;
    int c=0;
    
    for(int i=0; i<n; i++){
      if(s[i] == '0' && c==1){
        ans++;
        c=0;
      } else if(s[i] == '1' && c==0){
        ans++;
        c=1;
      }
    }
    
    cout<<ans<<endl;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t=1;
    cin>>t;
    while(t--) solve();
    return 0;
}