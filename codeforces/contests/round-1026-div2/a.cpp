#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const int INF = 1e9;

void solve(){
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0; i<n; i++) cin>>a[i];

    sort(a.begin(), a.end());
    int ans = INF;

    for(int i=0; i<n; i++){
        if(a[i]% 2 == a[n-1] %2){
            ans = min(ans, i);
            break;
        }
    }

    for(int i=n-1; i>=0; i--){
        if(a[i]% 2 == a[0] %2){
            ans = min(ans, n-i-1);
            break;
        }
    }

    cout<<ans<<endl;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--) solve();
    return 0;
}