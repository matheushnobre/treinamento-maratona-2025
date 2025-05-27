#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n, ans=1;
    cin>>n;
    vector<int> a(n);
    for(int i=0; i<n; i++) cin>>a[i];

    int c=0, i=1;
    while(i < n){
        if(a[i] - a[c] > 1){
            ans++;
            c = i;
        }
        i++;
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