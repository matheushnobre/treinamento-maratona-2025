#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const int mod = 1e9+7;
const ll inf = 1e18+10;

void solve(){
    ll n, w, l, tx, ty, x, y;
    cin>>n>>w>>l>>tx>>ty;

    vector<pair<double, char>> v;
    for(int i=0; i<n; i++){
        cin>>x>>y;
        double dist = sqrt((x-tx)*(x-tx) + (y-ty)*(y-ty));
        v.push_back({dist, 'A'});
    }

    for(int i=0; i<n; i++){
        cin>>x>>y;
        double dist = sqrt((x-tx)*(x-tx) + (y-ty)*(y-ty));
        v.push_back({dist, 'R'});
    }

    sort(v.begin(), v.end());
    ll cont=0;
    for(int i=0; i<2*n; i++){
        //cout<<v[i].first<<" "<<v[i].second<<endl;
        if(v[i].second != v[0].second) break;
        else cont++;
    }

    cout<<v[0].second<<" "<<cont<<endl;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t=1;
    //cin>>t;
    while(t--) solve();
    return 0;
}