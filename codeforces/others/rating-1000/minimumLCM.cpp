#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int pd(int n){
  for(int i=2; i<sqrt(n)+1; i++)
    if(n % i == 0) return i;
  return -1;
}

void solve(){
    int n;
    cin>>n;
    
    if(n == 2) cout<<"1 1"<<endl;
    else{
      int aux = pd(n);
      if(aux == -1) cout<<"1 "<<n-1<<endl;
      else{
        cout<<n/aux<<" "<<n/aux*(aux-1)<<endl;
      }
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