#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve(){
    int n;
    cin>>n;

    vector<int> a(n);
    for(int i=0; i<n; i++) cin>>a[i];
    sort(a.begin(), a.end());

    int ans = 0;
    for(int i=0; i<n; i++){
        if((n-i) >= a[i]) ans = a[i];
        else{
            ans = max(ans, n-i);
            break;
        }
    }

    cout<<ans<<endl;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t=1;
   // cin>>t;
    while(t--) solve();
    return 0;
}