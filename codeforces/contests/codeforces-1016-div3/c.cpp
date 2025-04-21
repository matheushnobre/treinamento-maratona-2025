#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

bool ehPrimo(int n){
  if (n < 2) return false;
  else if(n == 2) return true;
  for(int i=2; i<sqrt(n)+1; i++){
    if(n%i==0) return false;
  }
  return true;
}

void solve(){
   int n,k;
   cin>>n>>k;
   if(n == 1){
     if(k==2) cout<<"YES"<<endl;
     else cout<<"NO"<<endl;
   } else if(k == 1){
     if(ehPrimo(n)) cout<<"YES"<<endl;
     else cout<<"NO"<<endl;
   } else{
     cout<<"NO"<<endl;
   }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--) solve();
    return 0;
}