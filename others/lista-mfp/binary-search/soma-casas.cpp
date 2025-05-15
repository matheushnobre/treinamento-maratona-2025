#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve(){
   int n, k;
   cin>>n;
   
   vector<int> a(n);
   map<int, int> freq;
   
   for(int i=0; i<n; i++) {
     cin>>a[i];
     freq[a[i]] = 1;
   }
   
   cin>>k;
   
   for(int i=0; i<n; i++){
     int v = k - a[i];
     if(freq[v]){
       cout<<a[i]<<" "<<v<<endl;
       return;
     }
   }
   
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t=1;
    //cin>>t;
    while(t--) solve();
    return 0;
}