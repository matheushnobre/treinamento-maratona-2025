#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define MAX 100010
vector<int> niveis(MAX, 0);
vector<int> usado(MAX, 0);

int marca(int i, int n, vector<vector<int>>& ar){
  niveis[n]++;
  for(int v : ar[i]){
    marca(v, n+1, ar);
  }
  return 0;
}

void solve(){
  int n, k, u, v;
  cin>>n>>k;
  vector<vector<int>> ar(n+1);
  
  for(int i=1; i<n; i++){
    cin>>u>>v;
    ar[u].push_back(v);
  }
  
  marca(1, 0, ar);
  
  //for(int i=0; i<n; i++){
    //cout<<"nivel "<<i<<" possui "<<niveis[i]<<" vertices"<<endl;
  //}
  
  int ans = 1;
  usado[0] = 1;
  if(niveis[2] > 0) {
    ans++;
    usado[2] = 1;
  }
  
  for(int i=3; i<MAX; i++){
    if(niveis[i] == 0) break;
    if(niveis[i-1] > 1){
      ans++;
      usado[i] = 1;
    }
    else if(niveis[i-1] == 1){
      if(usado[i-1] == 0){
        usado[i] = 1;
        ans++;
      }
    }
  }
  
  cout<<ans<<endl;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t=1;
    //cin>>t;
    while(t--) solve();
    return 0;
}