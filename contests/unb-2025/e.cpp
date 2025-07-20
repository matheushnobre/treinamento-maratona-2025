#include <bits/stdc++.h>
using namespace std;

void solve(){
    map<char, int> cont;
    string s;
    int ans=0;
    cin>>s;

    for(char c : s) cont[c]++;
    for(char c : s) ans += cont[c]-1;
    cout<<ans<<endl;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t=1;
    cin>>t;
    while(t--) solve();
    return 0;
}