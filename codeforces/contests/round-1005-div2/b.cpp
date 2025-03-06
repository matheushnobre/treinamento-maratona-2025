#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const int inf=1e10;
const int mod=1e9+7;

void solve(){
    int n;
    cin>>n;
    vector<int> v(n);
    vector<int> f(n);
    map<int, int> freq;
    for(int i=0; i<n; i++){
      cin>>v[i];
      freq[v[i]]++;
    }
    
    for(int i=0; i<n; i++){
      f[i] = freq[v[i]];
    }
    
    int ans=0, temp=0, l=0, r=0;
    for(int i=0; i<n; i++){
      if(f[i] == 1){
        temp++;
      } else{
        temp=0;
      }
      
      if(temp > ans){
        l = i-temp+2;
        r = i+1;
        ans = temp;
      }
    }
    
    //for(int i=0; i<n; i++) cout<<f[i]<<" "; cout<<endl;
    if(ans == 0) cout<<0<<endl;
    else cout<<l<<" "<<r<<endl;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t=1;
    cin>>t;
    while(t--) solve();
    return 0;
}