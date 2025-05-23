#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve(){
    int r;
    cin>>r;
    if(r <= 1399) cout<<"Division 4"<<endl;
    else if(r <= 1599) cout<<"Division 3"<<endl;
    else if(r <= 1899) cout<<"Division 2"<<endl;
    else cout<<"Division 1"<<endl;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--) solve();
    return 0;
}