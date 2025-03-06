#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const ll inf = 1e20;
const int mod = 1e9+7;

int solve(){
    ll n;
    string s;
    ll c=0, m=0;
    cin>>n>>s;
    for(char car : s){
      if(car == '_') m++;
      else c++;
    }
    
    if(n < 3 || c < 2 || m == 0){
      cout<<0<<endl;
      return 0;
    }
    
    ll c1, c2;
    if(c % 2 == 0){
      c1 = c/2;
      c2 = c/2;
    } else{
      c1 = c/2;
      c2 = c/2+1;
    }
    
    cout<<c1*c2*m<<endl;
    
    return 0;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--) solve();
    return 0;
}