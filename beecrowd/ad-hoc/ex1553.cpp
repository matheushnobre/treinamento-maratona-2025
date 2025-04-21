#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve(int n, int k){
    if(n == 0) return;
    
    map<int, int> freq;
    int ans=0, v;
    for(int i=0; i<n; i++){
      cin>>v;
      freq[v]++;
      if(freq[v] == k) ans++;
    }
    cout<<ans<<endl;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, k;
    while(cin>>n>>k) solve(n, k);
    return 0;
}