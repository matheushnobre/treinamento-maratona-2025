#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve(){
    int n;
    cin>>n;

    for(int i=2; i<=n; i+=2) cout<<i<<" ";
    if(n % 2 == 0) n--;
    for(int i=n; i>0; i-=2) cout<<i<<" ";
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