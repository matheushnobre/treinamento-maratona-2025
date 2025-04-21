#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve(){
  int n, t, k;
  cin>>n>>t>>k;
  
  int l = 1, r = n, kleft=0, ans;
  while(l != r){
    int m = (l+r) / 2;
    cout<<"? "<<l<<" "<<m<<endl;
    cin>>ans;
    ans = (m-l+1 - ans);
    if(kleft + ans < k){
        l = m+1;
        kleft += ans;
    } else{
        r = m;
    }
    
  }
  cout<<"! "<<l<<endl;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}