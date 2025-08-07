#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve(){
    int n, m;
    cin>>n;
    vector<int> a(n);
    string ans = "YES";
    for(int i=0; i<n; i++){
        cin>>a[i];
        if(i==0) m = a[i];
        if(a[i] >= 2*m) ans = "NO";
        m = min(a[i], m);
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