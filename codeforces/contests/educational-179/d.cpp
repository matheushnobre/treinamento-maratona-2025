#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const ll inf = 1e18+10;
const int mod = 1e9+7;

void solve(){
    int n, m;
    cin>>n>>m;
    vector<pair<ll, ll>> a(m);
    for(int i=0; i<m; i++) {
        cin>>a[i].second;
        a[i].first = a[i].second / 100;
    }

    sort(a.begin(), a.end());
    for(int i=0; i<n/2; i++){
        for(int j=0; j<3; j++){
            cout<<a[i].second<<" ";
            cout<<a[m-i-1].second<<" ";
        } cout<<endl;
    }

    for(int i=0; i<n/2; i++){
        for(int j=0; j<3; j++){
            cout<<a[m-i-1].second<<" ";
            cout<<a[i].second<<" ";
        } cout<<endl;
    }

    if(n % 2 == 1){
        int aux = n / 2;
        for(int j=0; j<3; j++){
            cout<<a[aux].second<<" ";
            cout<<a[m-aux-1].second<<" ";
        } cout<<endl;
    }

}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t=1;
    cin>>t;
    while(t--) solve();
    return 0;
}