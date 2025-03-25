#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const int mod = 1e9+7;

void solve(){
    int n, m1=0, m2=0;
    cin>>n;
    vector<int> a(n);
    for(int i=0; i<n; i++){
      cin>>a[i];
      if(a[i] > m2) m2 = a[i];
      if(a[i] > m1){
        int temp = m2;
        m2 = m1;
        m1 = a[i];
      }
    }
    
    for(int i : a){
      if(i != m1) cout<<i-m1<<" ";
      else cout<<i-m2<<" ";
    } cout<<endl;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t=1;
    cin>>t;
    while(t--) solve();
    return 0;
}