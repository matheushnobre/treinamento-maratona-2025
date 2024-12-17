#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve(){
    ll n, m, r, c, answer;
    cin>>n>>m>>r>>c;
    answer = ((n-r) * m) + (m-c) + ((n-r) * (m-1));
    cout<<answer<<endl;
}

int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    int t;
    cin>>t;
    while(t--)
        solve();
    return 0;
}