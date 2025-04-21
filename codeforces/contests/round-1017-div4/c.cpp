#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define MAX 2000

void solve(){
    int n;
    cin>>n;
    vector<int> ans(MAX);
    vector<int> ap(MAX);
    
    for(int i=1; i<=n; i++){
      for(int j=1; j<=n; j++){
        cin>>ans[i+j];
        ap[ans[i+j]]=1;
      }
    }
    
    int s=0;
    for(int i=1; i<=2*n; i++) {
      if(ap[i] == 0) s = i;
    }
    

    for(int j=1; j<=2*n; j++){
      if(ans[j]) cout<<ans[j]<<" ";
      else{
        cout<<s<<" ";
      }
    }
    
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