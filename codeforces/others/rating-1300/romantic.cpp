#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve(){
    int n;
    cin>>n;
    vector<int> a(n);
    
    ll aux = 0;
    map<ll, int> mapa;
    string ans = "NO";
    
    for(int i=0; i<n; i++){
      cin>>a[i];
      if(i%2==1) a[i] = -a[i];
      aux += a[i];
      if(mapa[aux] || aux == 0) ans = "YES";
      mapa[aux] = 1;
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