#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve(){
    int n;
    string ans="NO";
    cin>>n;
    vector<int> a(n);
    
    int zero=0;
    for(int i=0; i<n; i++) {
      cin>>a[i];
      if(a[i] == 0 && i!=0 && a[i-1] == 0) ans="YES";
      if(a[i] == 0) zero++;
    }
    
    if(zero==0) ans="YES";
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