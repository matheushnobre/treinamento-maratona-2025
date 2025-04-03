#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const int mod = 1e9+7;

void solve(){
  ll n, k, x, soma=0;
  cin>>n>>k>>x;
  vector<int> v(n);
  for(int i=0; i<n; i++){
    cin>>v[i];
    soma += v[i];
  }
  
  int aux = x / soma;
  if(x % soma == 0) aux--;
  k = max(0LL, k-aux);
  
  ll ans = n*k;
    
  soma = soma*aux;
  for(int i=n-1; i>0; i--){
    if(soma + v[i] < x) ans--;
    else break;
    soma += v[i];
  }
  
  cout<<max(0LL,ans)<<endl;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t=1;
    cin>>t;
    while(t--) solve();
    return 0;
}