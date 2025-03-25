#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const int mod = 1e9+7;

void solve(){
    int n, ans=0;
    string a;
    cin>>n>>a;
    for(char c : a){
      ans = max(ans, c-'a'+1);
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