#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n; 
    cin>>n;
    vector<int> a(n);

    int last = -1;
    for(int i=0; i<n; i++){
        cin>>a[i];
        if(a[i] == 0) last = i+1;
    }

    if(last == -1){
        cout<<n+1<<" ";
        for(int i=1; i<=n; i++) cout<<i<<" ";
        cout<<endl;
        return;
    }

    for(int i=1; i<=last; i++) cout<<i<<" ";
    cout<<n+1<<" ";
    if(last != n) for(int i=last+1; i<=n; i++) cout<<i<<" "; 
    cout<<endl;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t=1;
    cin>>t;
    while(t--) solve();
    return 0;
}