#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const int mod = 1e9+7;
const ll inf = 1e18+100;

void solve(){
   int n, v=0, aux=0;
   cin>>n;
   vector<int> a(n);
   for(int i=0; i<n; i++) {
      cin>>a[i];
      if(i == 0) v = abs(a[i]);
      else{
        if(abs(a[i]) >= v) aux++;
      }
   }
   
   int m=n/2-1;
   if(n%2==1) m++;
   if(aux >= m) cout<<"YES"<<endl;
   else cout<<"NO"<<endl;
   
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t=1;
    cin>>t;
    while(t--) solve();
    return 0;
}