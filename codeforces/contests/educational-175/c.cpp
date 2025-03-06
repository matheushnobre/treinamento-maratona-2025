#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

bool check(int m, string& s, vector<int>& p, int k){
  char last = 'R';
  int cnt = 0;
  
  for(int i=0; i<s.size(); i++){
    if(p[i] > m){
      if(s[i] == 'B' && last == 'R') cnt++;
      last = s[i];
    }
  }
  //cout<<"m = "<<m<<", cnt = "<<cnt<<endl;
  return cnt <= k;
}

void solve(){
    int n, k; 
    string s;
    cin>>n>>k>>s;
    vector<int> p(n);
    for(int i=0; i<n; i++) cin>>p[i];
    
    int ans = -1, l=0, r=1e9;
    while(l <= r){
      int m = (l + r) / 2;
      if(check(m, s, p, k)){
     //   cout<<"here, m ="<<m<<endl;
        r = m-1;
        ans = m;
      } else{
        l = m + 1;
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