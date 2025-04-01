#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const int mod = 1e9+7;
const ll inf = 1e18;

void solve(){
    ll n, mp=-1, mi=-1, imi, imp;
    cin>>n;
    vector<int> a(n);
    
    for(int i=0; i<n; i++){
      cin>>a[i];
      if(a[i]%2==0) {
        if(a[i] > mp){
          mp = a[i];
          imp = i;
        }
      }
      else{
        if(a[i] > mi){
          mi = a[i];
          imi = i;
        }
      }
    }

    ll ans=0, temp=0;    
    // Situação pro par
    if(mp != -1){
      temp = mp;
      for(int i=0; i<n; i++){
        if(a[i] % 2 == 1) temp += a[i]-1;
      }
      
      if(mi != -1){
        temp++;
        for(int i=0; i<n; i++) if(a[i] % 2==0 && i != imp) temp += a[i];
        ans = temp - mp;
      } else{
        ans = temp;
      }
    }
    

    //Situação pro impar
    if(mi != -1){
      temp = mi;
      for(int i=0; i<n; i++){
        if(a[i] % 2 == 0) temp += a[i]; 
      }
      ans = max(ans, temp);
      if(mp != -1){
        for(int i=0; i<n; i++) if(a[i]%2==1 && i != imi) temp += a[i]-1;
        ans= max(ans, temp);
      } 
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