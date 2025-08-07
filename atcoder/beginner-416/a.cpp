#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n, l, r;
    string s;
    cin>>n>>l>>r>>s;

    for(int i=l-1; i<r; i++) if(s[i] != 'o'){
        cout<<"No"<<endl;
        return;
    }

    cout<<"Yes"<<endl;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t=1;
    //cin>>t;
    while(t--) solve();
    return 0;
}