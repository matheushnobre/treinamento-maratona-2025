#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve(){
    int n;
    cin>>n;
    vector<int> a(n);
    
    for(int i=0; i<n; i++){
      cin>>a[i];
      if(a[i] == 1) a[i]++;
      if(i!=0 && a[i] % a[i-1] == 0) a[i]++;
    }
    
    for(int i : a) cout<<i<<" ";
    cout<<endl;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--) solve();
    return 0;
}