#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve(){
    int n;
    cin>>n;
    
    set<int> aux;
    for(int i=0; i<n; i++){
      int v;
      cin>>v;
      aux.insert(v);
    }
    
    cout<<aux.size()<<endl;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--) solve();
    return 0;
}