#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve(){
    int n;
    map<int, int> segA, segB;
    cin>>n;
    vector<int> a(n), b(n);
    for(int i=0; i<n; i++) cin>>a[i];
    for(int i=0; i<n; i++) cin>>b[i];
    
    int temp = 1;
    for(int i=0; i<n; i++){
      if(i == 0) segA[a[i]] = 1;
      else{
        if(a[i] == a[i-1]){
          temp++;
        } else{
          temp = 1;
        }
        segA[a[i]] = max(segA[a[i]], temp);
      }
    }
    
    temp = 1;
    for(int i=0; i<n; i++){
      if(i == 0) segB[b[i]] = 1;
      else{
        if(b[i] == b[i-1]){
          temp++;
        } else{
          temp = 1;
        }
        segB[b[i]] = max(segB[b[i]], temp);
      }
    }
    
    int ans = 0;
    for(int i=1; i<=2*n; i++){
      ans = max(ans, segA[i] + segB[i]);
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