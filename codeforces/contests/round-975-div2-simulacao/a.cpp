#include <bits/stdc++.h>
using namespace std;

int solve(){
    int n, mp=0, mi=0;
    cin>>n;
    vector<int> a(n);
    for(int i=0; i<n; i++) cin>>a[i];

    for(int i=0; i<n; i++){
        if(i%2==1) mp = max(mp, a[i]);
        else mi = max(mi, a[i]);
    }

    mp += n/2;
    if(n%2==0) mi += n/2;
    else mi += n/2 + 1;
    cout<<max(mp, mi)<<endl;

    return 0;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--)
        solve();
    return 0;
}