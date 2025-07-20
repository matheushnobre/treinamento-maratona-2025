#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve(){
    int n;
    cin>>n;
    vector<int> a(n+3), b(n+3), count(n+1);

    for(int i=1; i<=n; i++) cin>>a[i];
    for(int i=1; i<=n; i++) cin>>b[i];

    for(int i=n; i>0; i--){
        if(a[i] == b[i] || a[i] == a[i+1] || b[i] == b[i+1] || count[a[i]] || count[b[i]]){
            cout<<i<<endl;
            return;
        }

        count[a[i+1]]++;
        count[b[i+1]]++;
    }

    cout<<0<<endl;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t=1;
    cin>>t;
    while(t--) solve();
    return 0;
}