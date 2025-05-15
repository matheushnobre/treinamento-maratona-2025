#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n, k, idx=0;
    cin>>n>>k;
    vector<int> a(n+1);
    for(int i=1; i<=n; i++){
        cin>>a[i];
        if(a[i] == k) idx = i;
    }
        
    int l=1, r=n+1;
    while (r-l != 1){
        int m = (l+r)/2;
        if(a[m] <= k) l = m;
        else r = m;
    }
    
    if(idx == l) cout<<0<<endl;
    else{
        cout<<1<<endl;
        cout<<l<<" "<<idx<<endl;
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