#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve(){
    int n, ans=0;
    cin>>n;
    for(int i=0; i<n; i++){
        int v;
        cin>>v;
        if(v==0) ans++;
        else ans +=v;
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