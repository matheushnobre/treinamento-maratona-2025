#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n, m, v, ans=1e9;
    cin>>n>>m;
    vector<int> count(m+1);

    for(int i=0; i<n; i++){
        cin>>v;
        count[v]++;
        ans = min(ans, n - count[v]);
    }

    cout<<ans<<endl;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}