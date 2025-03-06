#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve(){
    int n;
    cin>>n;
    vector<int> v(n-2);
    for(int i=0; i<n-2; i++){
      cin>>v[i];
    }
    
    bool saida=true;
    for(int i=1; i<v.size()-1; i++){
      if(v[i] == 0 && v[i-1] == 1 && v[i+1] == 1) saida=false;
    }
    
    if(saida) cout<<"YES\n";
    else cout<<"NO\n";
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t=1;
    cin>>t;
    while(t--) solve();
    return 0;
}