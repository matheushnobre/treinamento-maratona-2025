#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve(){
    int n;
    ll ans=0;
    string s;
    cin>>n;
    
    map<string, int> freqPal;
    map<char, int> first;
    map<char, int> second;
    
    for(int i=0; i<n; i++){
      cin>>s;
      
      ans += first[s[0]];
      ans += second[s[1]];
      ans -= freqPal[s]*2;
      
      freqPal[s]++;
      first[s[0]]++;
      second[s[1]]++;
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