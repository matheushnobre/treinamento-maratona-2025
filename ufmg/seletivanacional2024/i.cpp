#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n, l, r, sa=1;
    cin>>n;

    while(n--){
        cin>>l>>r;
        sa = max(sa, l);
        if(sa <= r){
            cout<<sa<<" ";
            sa++;
        } else{
            cout<<0<<" ";
        }
    }

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