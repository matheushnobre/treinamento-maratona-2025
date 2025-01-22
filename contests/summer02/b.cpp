#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const int mod = 1e9+7;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    ll n, ans=1, total=1; 
    cin>>n;
 
    for(int i=2; i<=n; i++){
        ans = (total + 1) % mod;
        total = (total + ans) % mod;
    }

    cout<<ans<<endl;
}