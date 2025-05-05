#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve(){
    ll n, k;
    string s;
    cin>>n>>k>>s;
    vector<ll> a(n);
    bool calculado = false;
    ll ml=0, m=0;
    for(int i=0; i<n; i++)
      cin>>a[i];
      
    for(int i=0; i<n; i++){
      if(s[i] != '0'){
        ml += a[i];
        m = max(ml, m);
        if(ml < 0) ml = 0;
        if(m > k){
          cout<<"NO"<<endl;
          return;
        }
      } 
      
      else{
        if(m == k){
          a[i] = -1e18;
          ml = 0;
        } else{
          ll mldepois = 0;
          ll mtemp = 0;
          for(int j=i+1; j<n; j++){
            if(s[j] == '0') break;
            mtemp += a[j];
            mldepois = max(mldepois, mtemp);
          }
          
          if(mldepois > k){
            cout<<"NO"<<endl;
            return;
          } 
          ll x = k - (mldepois + ml);
          a[i] = x;
          ml += x;
          m = max(ml, m);
        }
      }
      
    }
    
    if(m == k){
      cout<<"YES"<<endl;
      for(ll v : a) cout<<v<<" ";
      cout<<endl;
    }
    else{
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