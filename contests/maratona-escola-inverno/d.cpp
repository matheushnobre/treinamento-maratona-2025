#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    ll n, ans = 0;
    map<ll, ll> freq;
    cin>>n;

    for(int i=0; i<n; i++){
        ll v=0;
        cin>>v;
        ans += freq[v-1];
        ans += freq[v+1];
        freq[v]++;
    }

    cout<<ans<<endl;
    return 0;
}