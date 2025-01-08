#include <bits/stdc++.h>
using namespace std;

int solve(){
    int n, x;
    cin>>n;
    vector<int> v(n);
    for(int i=0; i<n; i++) cin>>v[i];
    if(n >= 3){
        cout<<"NO\n";
        return 0;
    }

    if(v[1] - v[0] >= 2){
        cout<<"YES\n";
        return 0;
    }    
    
    cout<<"NO\n";
    return 0;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--) solve();
    return 0;
}