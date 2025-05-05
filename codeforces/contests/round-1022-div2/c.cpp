#include <bits/stdc++.h>
using namespace std;

bool espalhar(vector<int>& a, int idx, vector<int>& aux){
  bool r=true;
  int i=idx-1;
  while(i>0){
    if(a[i] >= a[idx]) {
      if(aux[i]){
        r = false;
        break;
      }
      aux[i]=1;
    }
    else break;
    i--;
  }
  
  int j=idx+1;
  while(j<=a.size()){
    if(a[j] >= a[idx]) {
      if(aux[j]) {
        r=false;
        break;
      }
      aux[j] = 1;
    }
    else break;
    j++;
  }
  
  return r;
}

void solve(){
    int n;
    cin>>n;
    vector<pair<int, int>> a(n+2);
    vector<int> original(n+2), aux(n+5);
    
    for(int i=1; i<=n; i++){
      cin>>original[i];
      a[i].first = original[i];
      a[i].second = i;
    }
    
    int ans=0;
    sort(a.rbegin(), a.rend());
    for(int i=0; i<n; i++){
      int idx = a[i].second;
      if(!aux[idx]) {
        aux[idx] = 1;
        ans += espalhar(original, idx, aux);
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