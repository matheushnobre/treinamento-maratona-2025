#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve(){
   int n, maior=-1e10;
   cin>>n;
   
   vector<int> a(n), b(n), c(n);
   for(int i=0; i<n; i++) cin>>a[i];
   for(int i=0; i<n; i++){
     cin>>b[i];
     c[i] = a[i] - b[i];
     maior = max(c[i], maior);
   }
   
   vector<int> ans;
   for(int i=0; i<n; i++){
     if(c[i] == maior) ans.push_back(i+1);
   }
   
   cout<<ans.size()<<endl;
   for(int i : ans) cout<<i<<" ";
   cout<<endl;
   
   
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t=1;
    cin>>t;
    while(t--) solve();
    return 0;
}