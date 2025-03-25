#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int busca(vector<pair<int, int>>& a, int l, int r, int b){
  while(l <= r){
    int m = (l+r) / 2;
    if(a[m].first == b)  return a[m].second;
    else if(a[m].first < b){
      l = m+1;
    } else{
      r = m-1;
    }
  }
  return -1;
}

void solve(){
    int n, x;
    cin>>n>>x;
    vector<pair<int, int>> a(n);

    for(int i=0; i<n; i++){
      cin>>a[i].first;
      a[i].second = i+1;
    }
    
    sort(a.begin(), a.end());
    for(int i=0; i<n; i++){
      for(int j=i+1; j<n; j++){
        if(a[i].first + a[j].first > x) continue;
        int aux = busca(a, j+1, n-1, x-(a[i].first+a[j].first));
        if(aux != -1){
          cout<<a[i].second<<" "<<a[j].second<<" "<<aux<<endl;
          return;
        }
      }
    }
   
    cout<<"IMPOSSIBLE"<<endl;
    
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t=1;
    //cin>>t;
    while(t--) solve();
    return 0;
}