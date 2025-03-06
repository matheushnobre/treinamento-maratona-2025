#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve(){
    int n;
    char c;
    string s;
    cin>>n>>c>>s;
    
    if(c == 'g'){
      cout<<0<<endl;
      return;
    }
    
    s += s;    
    int temp=-1, ans=0;
    
    for(int i=0; i<2*n; i++){
      if(s[i] == c && temp == -1) temp = 1;
      else if(s[i] != 'g' && temp != -1) temp++;
      else if(s[i] == 'g'){
        ans = max(ans, temp);
        temp = -1;
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