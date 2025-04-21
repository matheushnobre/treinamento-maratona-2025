#include <bits/stdc++.h>
using namespace std;

#define MAX 100010
const int mod = 1e9+7;

typedef long long ll;

void solve(int n, int k){
    vector<int> v(n);
    for(int i=0; i<n; i++) cin>>v[i];
    sort(v.rbegin(), v.rend());

    int ans = 0;
    for(int i=0; i<k; i++){
        ans += v[i];
        ans %= mod;
    }

    cout<<ans<<endl;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, k;
    while(cin>>n>>k) solve(n, k);
    return 0;
}