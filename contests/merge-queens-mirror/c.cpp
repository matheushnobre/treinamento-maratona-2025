#include <bits/stdc++.h>
using namespace std;

void solve(){
  int n;
  cin>>n;
  vector<int> a(n), b(n);
  int saida=1000000;
  
  for(int i=0; i<n; i++) cin>>a[i];
  for(int i=0; i<n; i++){
    cin>>b[i];
    saida = min(saida, b[i]/a[i]);
  }
  
  cout<<saida<<endl;
}

int main(){
  ios::sync_with_stdio(0);
  cin.tie(0);
  solve();
  return 0;
}