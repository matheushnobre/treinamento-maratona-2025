#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll solve(){
    ll n, q; 
    ll k;
    cin>>n>>q;
    vector<ll> e(n);
    for(ll i=0; i<n; i++) cin>>e[i];
    vector<ll> pref(n);

    for(ll i=0; i<n; i++)
        pref[i] = (i-0) * (n-i-1) + (i-0);

    map<ll, ll> answer;
    for(ll i=0; i<n-1; i++){
        answer[pref[i] + n-i-1]++;
        answer[pref[i+1]] += (e[i+1] - e[i] - 1);
    }
    answer[pref[n-1]]++;

    while(q--){
        cin>>k;
        ll a = answer[k];
        if(a<=0) cout<<0<<" ";
        else cout<<a<<" ";
    }

    cout<<endl;
    return 0;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll t;
    cin>>t;
    while(t--)
        solve();
    return 0;
}