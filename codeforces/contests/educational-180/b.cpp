#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0; i<n; i++) cin>>a[i];

    bool isCr=true, isD=true;
    for(int i=1; i<n; i++){
        if(a[i] >= a[i-1]) isD=false;
        else isCr = false;

        if(abs(a[i] - a[i-1]) <= 1){
            cout<<0<<endl;
            return;
        }
    }

    if(isCr || isD) cout<<"-1"<<endl;
    else cout<<"1"<<endl;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t=1;
    cin>>t;
    while(t--) solve();
    return 0;
}