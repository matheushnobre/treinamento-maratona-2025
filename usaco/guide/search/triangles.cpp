#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
vector<pair<ll, ll>> t(110);

ll calc(int i, int j, int k){
    ll x1 = t[i].first, y1 = t[i].second;
    ll x2 = t[j].first, y2 = t[j].second;
    ll x3 = t[k].first, y3 = t[k].second;

    if(!(x1 == x2 && y2 == y3)) return 0;

    /*
    [x1 y1 1 x1 y1]
    [x2 y2 1 x2 y2]
    [x3 y3 1 x3 y3]
    */

    ll dp = x1 * y2 + y1 * x3 + x2 * y3;
    ll ds = y2 * x3 + x1 * y3 + y1 * x2;
   // cout<<"i = "<<i<<" j = "<<j<<", k = "<<k<<"\ndp = "<<dp<<", ds = "<<ds<<endl;
    ll d = dp - ds;
    return abs(d);
}

void solve(){
    int n;
    cin>>n;
    
    for(int i=0; i<n; i++) cin>>t[i].first>>t[i].second;
    ll ans = 0;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            for(int k=0; k<n; k++){
              //  cout<<i<<" "<<j<<" "<<k<<" => "<<a<<endl;
                ans = max(ans,  calc(i, j, k));
            }
        }
    }

    cout<<ans<<endl;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    freopen("triangles.in", "r", stdin);
    freopen("triangles.out", "w", stdout);
    solve();
    return 0;
}