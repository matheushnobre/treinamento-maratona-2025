#include <bits/stdc++.h>
using namespace std;

typedef vector<int> vi;
typedef long long ll;
#define pb push_back

void solve(){
    ll n, x;
    cin>>n>>x;
    
    vector<int> v(n);
    for(int i=0; i<n; i++) cin>>v[i];
    sort(v.rbegin(), v.rend());
    
    int ans=0, c=1;
    for(int i=0; i<n; i++){
      if(c * v[i] >= x){
        ans++;
        c=1;
      } else{
        c++;
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