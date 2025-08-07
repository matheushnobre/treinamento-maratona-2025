#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve(){
    ll l, r, ans=0;
    cin>>l>>r;

    if(r - l > 500){
        ll newL = 210-(l % 210)  + l;
        ll newR = r - (r % 210);

        if(newL > newR) newL = l;
        ans = (newR - newL + 1) / 210 * 48;

        for(ll i=l; i<newL; i++){
            if(i % 2 != 0 && i % 3 != 0 && i % 5 != 0 && i % 7 != 0) ans++;
        }

        for(ll i=newR; i<=r; i++){
            if(i % 2 != 0 && i % 3 != 0 && i % 5 != 0 && i % 7 != 0) ans++;
        }     
    } else{
        for(ll i=l; i<=r; i++){
            if(i % 2 != 0 && i % 3 != 0 && i % 5 != 0 && i % 7 != 0) ans++;
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