#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve(){
    int n, pb, ps;
    ll k;
    cin>>n>>k>>pb>>ps;
    pb--;
    ps--;
    vector<int> p(n);
    vector<ll> a(n);
    for(int i=0; i<n; i++) {
        cin>>p[i];
        p[i]--;
    }
    for(int i=0; i<n; i++) cin>>a[i];

    vector<int> vb(n), vs(n);
    ll bTemp=0, bMax=0, bPos;
    for(ll i=0; i<k; i++){
        if(vb[pb]) break;
        vb[pb] = 1;
        bPos = bTemp + (a[pb] * (k-i));
        bTemp += a[pb];
        pb = p[pb];
        bMax = max(bMax, bPos);
    }

    ll sTemp=0, sMax=0, sPos;
    for(ll i=0; i<k; i++){
        if(vs[ps]) break;
        vs[ps] = 1;
        sPos = sTemp + (a[ps] * (k-i));
        sTemp += a[ps];
        ps = p[ps];
        sMax = max(sMax, sPos);
    }

    if(bMax > sMax) cout<<"Bodya\n";
    else if(bMax < sMax) cout<<"Sasha\n";
    else cout<<"Draw\n";
}  

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--)
        solve();
    return 0;
}