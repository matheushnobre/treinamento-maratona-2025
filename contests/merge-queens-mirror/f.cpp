#include <bits/stdc++.h>
using namespace std;

void solve(){
  int a, b, c, d;
  cin>>a>>b>>c>>d;
  
  if((a == d && c + b == a) || (a == c && b+d == a) || (c == b && d+a == c) || (b == d && a + c == b) ){
    cout<<"SIM\n";
  } else cout<<"NAO"<<endl;
}

int main(){
  ios::sync_with_stdio(0);
  cin.tie(0);
  solve();
  return 0;
}