#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define INF 1e15

void solve(){
    int n;
    cin>>n;
    vector<ll> val((n*(n-1))/2);
    vector<ll> ans(n);
    for(int i=0; i<(n*(n-1))/2; i++) cin>>val[i];
    sort(val.begin(), val.end());

    int i=0;
    for(int index=0; index<n-1; index++){
        ans[index] = val[i];
        i += (n-index-1);
    }
    
    ans[n-1] = val[(n*(n-1))/2-1];
    for(int v : ans) cout<<v<<" ";
    cout<<endl;
}

int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    int t;
    cin>>t;
    while(t--) solve();
    return 0;
}