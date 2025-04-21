#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

bool check(int m, vector<int>& a, int k){
  int part=1;
  vector<int> ver(m+1, 0);
  int cont=0;

  for(int i=0; i<a.size(); i++){
    if(a[i] <= m){
      if(a[i] != m && ver[a[i]] != part){
        cont++;
      }
      ver[a[i]] = part;
    } 
    
    if(cont == m){
      k--;
      part++;
      cont = 0;
    }
  }
  
  return k<=0;
}

void solve(){
   int n, k;
   cin>>n>>k;
   vector<int> a(n);
   for(int i=0; i<n; i++) cin>>a[i];
   
   int ans=0, l=1, r=n+10;
   while(l < r){
     int m = (l+r)/2;
     if(check(m, a, k)){
       l = m+1;
       ans = max(ans, m);
     } else{
       r = m;
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