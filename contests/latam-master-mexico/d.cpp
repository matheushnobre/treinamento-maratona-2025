#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){
  int r, c, k, v;
  cin>>r>>c>>k;
  
  vector<int> freq(100010);
  for(int i=0; i<c; i++){
    cin>>v;
    freq[v]++;
  }
  
  sort(freq.rbegin(), freq.rend());
  int ans=0;
  for(int i=0; i<k; i++){
    ans += freq[i];
  }
  
  cout<<ans<<endl;
}