#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve(){
  int n, v, il=0, pr=0;
  cin>>n;
  
  for(int i=0; i<n; i++){
    cin>>v;
    if(v % 2 == 1) il++;
  }
  
  for(int i=0; i<n; i++){
    cin>>v;
    if(v % 2 == 0) pr++;
  }
  
  
  if(il == pr) cout<<"SIM"<<endl;
  else cout<<"NAO"<<endl;
  
}

int main(){
  ios::sync_with_stdio(0);
  cin.tie(0);
  solve();
  return 0;
}