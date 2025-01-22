#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned int ui;
const ll inf = 1e18+10;
const int mod = 1e9+7;

void solve(){
    int l, r;
    cin>>l>>r;
    if(l==1 && r==1){
        cout<<1<<endl;
    } else{
        cout<<r-l<<endl;
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