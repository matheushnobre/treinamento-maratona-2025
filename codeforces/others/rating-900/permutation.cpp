#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int gcd(int a, int b){
  while(b != 0){
    int r = a % b;
    a = b;
    b = r;
  }
  return a;
}

void solve(){
    int n, v, ans=0;
    cin>>n;

    for(int i=0; i<n; i++){
      cin>>v;
      ans = gcd(ans, abs(v - i - 1));
    }
    
    cout<<ans<<endl;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--) solve();
    return 0;
}