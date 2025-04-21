#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve(){
  int n;
  cin>>n;
  vector<ll> a(n);
  ll ans=n;
  for(int i=0; i<n; i++) cin>>a[i];
  
  if(n == 1){
    cout<<"1"<<endl;
    return;
  } else if(n == 2){
    cout<<"3"<<endl;
    return;
  }
  
  ll temp=2;
  for(int i=2; i<n; i++){
    if(a[i] - a[i-1] == a[i-1] - a[i-2]) temp++;
    else{
      ll aux = (temp * (temp-1))/2;
      ans += aux;
      temp = 2;
    }
  }
  
  ll aux = (temp * (temp-1))/2;
  ans += aux;
  temp = 1;
  
  cout<<ans<<endl;
}

int main(){
  ios::sync_with_stdio(0);
  cin.tie(0);
  solve();
  return 0;
}