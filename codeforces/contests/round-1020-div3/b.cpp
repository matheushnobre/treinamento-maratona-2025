#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int, int> pii;

void solve(){
  int n, x;
  cin>>n>>x;
  for(int i=0; i<n; i++){
    if(i!=x) cout<<i<<" ";
  } if(x < n) cout<<x;
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