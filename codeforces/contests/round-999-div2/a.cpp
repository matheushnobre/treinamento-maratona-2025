#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned int ui;
const ll inf = 1e18+10;
const int mod = 1e9+7;

void solve(){
    int n, v, np=0, ni=0;
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>v;
        if(v%2==0) np++;
        else ni++;
    }

    if(np>0) cout<<ni+1<<endl;
    else cout<<ni-1<<endl;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t=1;
    cin>>t;
    while(t--) solve();
    return 0;
}