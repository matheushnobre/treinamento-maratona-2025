#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){
  ll n;
  cin>>n;
  ll ans=0, t=0;
  int v=1;
  
  int i=0;
  while(t < n){
    ans++;
    t += v;
    if(i%2==1) v++;
    i++;
  }
  
  cout<<ans<<endl;
}