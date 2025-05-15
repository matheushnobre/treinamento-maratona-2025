#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const int mod = 1e9+7;
const ll inf = 1e18+10;

void solve(){
    double n, t, total=0;
    cin>>n>>t;

    for(int i=0; i<n; i++){
        char a;
        double b;
        cin>>a>>b;
        total += b;   
    }
    
    double ans = total / t;

    cout<<fixed<<setprecision(10)<<ans<<endl;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t=1;
    //cin>>t;
    while(t--) solve();
    return 0;
}