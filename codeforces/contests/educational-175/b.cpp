#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve(){
    ll n, x, k, ans=0, temp=0;
    cin>>n>>x>>k;
    string s;
    cin>>s;
    
    for(int i=0; i<n; i++){
      if(s[i] == 'L') x--;
      else x++;
      
      if(x == 0){
        temp = i+1;
        ans++;
        break;
      }
    }
    
    if(ans == 0){
      cout<<0<<endl;
      return;
    }
    
    int d=0;
    for(int i=0; i<n; i++){
      if(temp + i + 1 > k){
        cout<<ans<<endl;
        return;
      }
      if(s[i] == 'L') x--;
      else x++;
      
      if(x == 0){
        temp += i+1;
        d = i+1;
        ans++;
        break;
      }
    }
    
    if(ans == 1){
      cout<<1<<endl;
      return;
    }
    
    //cout<<"faltam "<<k-temp<<" segundos"<<endl;
    //cout<<"ans = "<<ans<<", d = "<<d<<endl;
    ans += (k-temp) / d;
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