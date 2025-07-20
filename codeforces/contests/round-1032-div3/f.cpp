#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve(){
    ll n, s, x;
    cin>>n>>s>>x;

    int lastX = -1, lastM = -1;
    vector<ll> a(n+1);
    map<ll, vector<int>> prefix;
    prefix[0] = {0};
    ll somaAtual = 0;
    ll ans = 0;

    for(int i=1; i<=n; i++){
        cin>>a[i];
        if(a[i] == x) lastX = i;
        else if(a[i] > x) lastM = i;

        somaAtual += a[i];
        ll aux = somaAtual - s;

        int l = lower_bound(prefix[aux].begin(), prefix[aux].end(), lastM) - prefix[aux].begin();
        int r = lower_bound(prefix[aux].begin(), prefix[aux].end(), lastX) - prefix[aux].begin();
        ans += max(0, (r-l));
        prefix[somaAtual].push_back(i);
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