#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

bool isPrime(int n){
  if(n <= 1) return false;
  else if(n == 2) return true;
  for(int i=2; i<=sqrt(n)+1; i++){
    if(n%i==0) return false;
  }
  return true;
}

void solve(){
    int n;
    ll ans=0;
    cin>>n;
    vector<int> primes;
    vector<bool> crivo(n+1, 1);
    for(int i=2; i*i<=n; i++) {
      if(!crivo[i]) continue;
      for(int j=i*i; j<=n; j+=i) crivo[j] = 0;
    }
    
    for(int i=2; i<=n; i++) if(crivo[i]) primes.push_back(i);
    

    int j=primes.size()-1;
    for(int i=1; i<=n; i++){
      while(j >= 0 && primes[j] * i > n) j--;
      ans += j+1;
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