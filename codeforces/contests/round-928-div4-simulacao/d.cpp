#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const ll v =  2147483647;

void solve(){
    int n, ans=0; 
    ll a;
    map<ll, int> mapa;
    cin>>n;
    while(n--){
        cin>>a;
        if(mapa[a^v]){
            mapa[a^v]--;
        } 
        else{
            ans++;
            mapa[a]++;
        }
       
    }
    
    cout<<ans<<endl;
    
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t; cin>>t;
    while(t--) solve();
    return 0;
}