#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int, int> pii;

void solve(){
  ll n, k, maiorA=0, menorA=1e9;
  cin>>n>>k;
  
  vector<ll> a(n), b(n);
  for(int i=0; i<n; i++){
    cin>>a[i];
    maiorA = max(maiorA, a[i]);
    menorA = min(menorA, a[i]);
  }
  
  ll soma = -1;
  for(int i=0; i<n; i++){
    cin>>b[i];
    if(b[i] != -1){
      soma = a[i] + b[i];
    }
  }
  
  if(soma != -1){
    for(int i=0; i<n; i++){
      if(b[i] != -1){
        if(a[i] + b[i] != soma){
          cout<<0<<endl;
          return;
        }
      }
      if(a[i] > soma || a[i] + k < soma){
        cout<<0<<endl;
        return;
      }
    }
    cout<<1<<endl;
    return;
  }
  
  int aux = menorA + k;
  int a2 = aux - maiorA;
  if(a2 < 0){
    cout<<0<<endl;
  } else{
    cout<<a2+1<<endl;
  }
  
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t=1;
    cin>>t;
    while(t--) solve();
    return 0;
}