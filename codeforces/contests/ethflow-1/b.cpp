#include <bits/stdc++.h>
using namespace std;

int solve(){
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0; i<n; i++) cin>>a[i];
    for(int i=0; i<n; i++){
        if((a[i] <= i) || ((n-1-i) * 2 >= a[i]) || ((i*2) >= a[i])){
            cout<<"NO\n";
            return 0;
        }
    }

    cout<<"YES\n";
    return 0;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t=1;
    cin>>t;
    while(t--) solve();
    return 0;
}