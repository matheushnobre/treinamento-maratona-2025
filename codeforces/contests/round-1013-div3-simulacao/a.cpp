#include <bits/stdc++.h>
using namespace std;

typedef vector<int> vi;
typedef long long ll;
#define pb push_back

void solve(){
    vector<int> freq(10);
    int n, v, ans=0;
    cin>>n;
    for(int i=0; i<n; i++){
      cin>>v;
      freq[v]++;
      if(ans  == 0 && freq[0] >= 3 && freq[1] >= 1 & freq[2] >= 2 && freq[5] >=  1 && freq[3] >= 1){
        ans = i+1;
      }
    }
    cout<<ans<<endl;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t=1;
    cin>>t;
    while(t--) solve();
    return 0;
}