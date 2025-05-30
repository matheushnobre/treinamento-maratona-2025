// Fiz um força bruta que pasasse na 1º subtask. 
// Resultado: 7 / 90

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned int ui;
const ll inf = 1e18+10;
const int mod = 1e9+7;

void solve(){
    ll n;
    cin>>n;
    vector<ll> nums(n);
    for(int i=0; i<n; i++) cin>>nums[i];

    ll x = 0;
    for(int i=0; i<n; i++){
        for(int j=i; j<n; j++){
            x = x^(nums[i]+nums[j]);
        }
    }

    cout<<x<<endl;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t=1;
    //cin>>t;
    while(t--) solve();
    return 0;
}