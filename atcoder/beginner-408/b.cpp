#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0; i<n; i++) cin>>a[i];

    sort(a.begin(), a.end());
    vector<int> ans = {a[0]};
    for(int i=1; i<n; i++){
        if(a[i] != a[i-1])
            ans.push_back(a[i]);
    }

    cout<<ans.size()<<endl;
    for(int i : ans) cout<<i<<" ";
    cout<<endl;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t=1;
    //cin>>t;
    while(t--) solve();
    return 0;
}