#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve(){
  int n;
  cin>>n;
  vector<int> a(n);
  for(int i=0; i<n; i++)
    cin>>a[i];
  
  if(n == 1){
    cout<<a[0]<<endl;
    return;
  }
  
  int v = a[0] + a[1] - 1;
  for(int i=2; i<n; i++){
    v = v + a[i] - 1;
  }
  
  cout<<v<<endl;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t=1;
    cin>>t;
    while(t--) solve();
    return 0;
}