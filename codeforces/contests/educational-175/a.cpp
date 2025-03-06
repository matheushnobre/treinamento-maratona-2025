#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve(){
    int n;
    cin>>n;
    
    if(n == 0){
      cout<<1<<endl;
      return;
    } else if(n==1){
      cout<<2<<endl;
      return;
    } else if(n==2){
      cout<<3<<endl;
      return;
    }
    
    int aux = n / 15 * 3;
    if(n >= 3) aux += 3;
    if(n % 15 == 0) aux -= 2;
    else if((n-1) % 15 == 0) aux -= 1;
    cout<<aux<<endl;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--) solve();
    return 0;
}