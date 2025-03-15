#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n, aux=-1, temp=1;
    bool saida=false;
    cin>>n;
    for(int i=0; i<n; i++){
      int v;
      cin>>v;
      if(v == aux) temp++;
      else{
        aux = v;
        temp = 1;
      }
      if(temp == 3) saida=true;
    }
    
    saida ? cout<<"Yes\n" : cout<<"No\n";
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t=1;
    //cin>>t;
    while(t--) solve();
    return 0;
}