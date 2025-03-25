#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const int mod = 1e9+7;

void solve(){
    vector<int> a(3);
    for(int i=0; i<3; i++) cin>>a[i];
    sort(a.begin(), a.end());
    cout<<a[1]<<endl;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t=1;
    cin>>t;
    while(t--) solve();
    return 0;
}