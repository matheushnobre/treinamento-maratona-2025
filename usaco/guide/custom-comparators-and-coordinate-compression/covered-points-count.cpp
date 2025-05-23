#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve(){
    int n;
    cin>>n;
    vector<pair<ll, ll>> seg;

    for(int i=0; i<n; i++){
        ll a, b;
        cin>>a>>b;
        seg.push_back({a, 1});
        seg.push_back({b+1, -1});
    }

    sort(seg.begin(), seg.end());
    ll temp=0;

    map<ll, ll> aux;
    for(auto i : seg){
        temp += i.second;
        aux[i.first] = temp;
    }

    vector<ll> ans(n+1);
    vector<pair<ll, ll>> v;
    for(auto i : aux) v.push_back(i);

    for(int i=1; i<v.size(); i++){
        ans[v[i-1].second] += v[i].first - v[i-1].first;
    }

    for(int i=1; i<=n; i++) cout<<ans[i]<<" ";
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}