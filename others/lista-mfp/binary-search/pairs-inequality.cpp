#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve(){
   ll n, ans=0;
   cin>>n;
   vector<ll> a(n), aux(n);
   
   for(int i=0; i<n; i++) {
     cin>>a[i];
     if(i == 0) aux[i] = 0;
     else aux[i] = aux[i-1];
     
     if(a[i] < i+1) {
       //cout<<"a[i] < i em i = "<<i<<", ans += "<<aux[i-2]<<endl;
       if(a[i]-2 >= 0) ans += aux[a[i]-2];
       aux[i]++;
     }
   }
   
   cout<<ans<<endl;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t=1;
    cin>>t;
    while(t--) solve();
    return 0;
}