#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned int ui;
const ll inf = 1e18;
const int mod = 1e9+7;

void solve(){
    ll n;
    cin>>n;
    ll ans=n;

    while(n > 1){
        bool div=false;
        for(int i=2; i<sqrt(n)+1; i++){
            if(n % i == 0){
                ans += n/i;
                n = n/i;
                div=true;
                break;
            }
        }
        if(!div){
            ans += 1;
            n = 1;
        }
    }
    cout<<ans<<endl;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t=1; 
 //   cin>>t;
    while(t--) solve();
}