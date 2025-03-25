#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve(){
    int n, k;
    string s;
    cin>>n>>k>>s;
    
    string aoContrario = "";
    for(int i=n-1; i>=0; i--){
      aoContrario += s[i];
    }
    if(s < aoContrario){
      cout<<"YES\n";
      return;
    }
    
    if(n == 1 || k == 0){
      cout<<"NO"<<endl;
      return;
    }
    
    for(int i=0; i<n; i++){
      if(s[i] != s[0]){
        cout<<"YES"<<endl;
        return;
      }
    }
    
    cout<<"NO"<<endl;
    return;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--) solve();
    return 0;
}