#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const int mod = 1e9+7;

void solve(){
  int n;
  cin>>n;
  vector<int> v(n+1), dp(n+1);
  for(int i=1; i<=n; i++){
    cin>>v[i];
  }
  
  int c=0, total=0;
  for(int i=0; i<n; i++){
    cin>>c;
    if(dp[c]){
      cout<<total<<" ";
    }
    
    else{
      int ans = 1;
      int temp = v[c];
      
      while(temp != c){
        if(dp[temp]) {
          ans = dp[temp];
          break;
        }
        ans++;
        temp = v[temp];
      }
      
      dp[c] = total + ans;
      temp = v[c];
      while(temp != c){
        dp[temp] = total + ans;
        temp = v[temp];
      }
      cout<<ans+total<<" ";
      total += ans;
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