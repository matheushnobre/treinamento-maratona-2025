#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve(){
    int n, al=0;
    string s;
    cin>>n>>s;
    
    int v='0';
    for(int i=0;  i<n; i++){
      if(s[i] != v){
        v = s[i];
        al++;
      } 
    }
    
    if(al == 0) cout<<n<<endl;
    else if(al == 1 || al == 2) cout<<n+1<<endl;
    else cout<<n+al-2<<endl;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int t=1;
    cin>>t;
    while(t--) solve();
    
    return 0;
}