#include <bits/stdc++.h>
using namespace std;

void solve(){
    string s;
    int ans=0;
    cin>>s;
    for(unsigned int i=0; i<s.size(); i++)
        if(s[i] == '1') ans++;
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