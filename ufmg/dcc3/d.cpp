#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int dfs(int i, vector<int>& v, vector<int>& conf){
  if(conf[i]) return 0;
  conf[i] = 1;
  return dfs(v[i], v, conf);
}

void solve(){
  int n; cin>>n;
  bool ans=true;
  vector<int> v(n);
  for(int i=0; i<n; i++){
    cin>>v[i];
    v[i]--;
  }
  vector<int> conf(n);
  dfs(v[0], v, conf);
  
  
  for(int i=0; i<n; i++) if(conf[i] == 0) ans=false;
  ans ? cout<<"Yes" : cout<<"No";
  cout<<endl;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t=1;
    //cin>>t;
    while(t--) solve();
    return 0;
}