#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n, s;
    cin>>n>>s;
    vector<int> a(n);
    for(int i=0; i<n; i++) cin>>a[i];

    sort(a.begin(), a.end());
    if(n == 1){
        cout<<abs(s-a[0])<<endl;
    } else if(s <= a[0]){
        cout<<a[n-1]-s<<endl;
    } else if(s >= a[n-1]){
        cout<<s-a[0]<<endl;
    }
    else{
        int p1 = (s - a[0]) + (a[n-1] - a[0]);
        int p2 = (a[n-1] - s) + (a[n-1] - a[0]);
        int ans = min(p1, p2);
        cout<<ans<<endl;
    }

}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t=1;
    cin>>t;
    while(t--) solve();
    return 0;
}