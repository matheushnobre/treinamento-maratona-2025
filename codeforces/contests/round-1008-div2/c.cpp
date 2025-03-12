#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve(){
    ll n, pos=0, neg=0;
    cin>>n;
    vector<ll> a(2*n);
    map<ll, ll> freq;
    
    for(int i=0; i<2*n; i++){
      cin>>a[i];
      freq[a[i]] = 1;
      if(i % 2 == 0) pos += a[i];
      else neg += a[i];
    }
    
    if(pos-neg > 0 && freq[pos-neg] == 0){
      cout<<pos-neg<<" ";
      for(ll i : a) cout<<i<<" ";
      cout<<endl;
    }
    else if(neg - pos > 0 && freq[neg-pos] == 0){
      cout<<neg-pos<<" ";
      for(int i=0; i<2*n; i++){
        if(i%2==0) cout<<a[i+1]<<" ";
        else cout<<a[i-1]<<" ";
      }
      cout<<endl;
    } else{
      pos -= a[0];
      ll ap=0, an=0;
      bool achou=false;
      cout<<a[0]<<" ";
      swap(pos, neg);
      for(int i=1; i<2*n; i++){
       // cout<<"ap = "<<ap<<", an = "<<an<<", pos = "<<pos<<", neg = "<<neg<<endl;
        if(!achou){
          if(i % 2 == 1){
            ll x = a[0] - ap  + an + pos - neg;
           // cout<<"possivel x = "<<x<<", par"<<endl;
            if(x > 0 && freq[x] == 0) {
              cout<<x<<" ";
              achou = true;
            } else{
              ap += a[i];
              pos -= a[i];
            }
          } else{
            ll x = -a[0] + ap - an - pos + neg;
           // cout<<"possivel x = "<<x<<", impar"<<endl;
            if(x > 0 && freq[x] == 0){
              cout<<x<<" ";
              achou=true;
            } else{
              an += a[i];
              neg -= a[i];
            }
          }
        }
        cout<<a[i]<<" ";
      }
      cout<<endl;
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