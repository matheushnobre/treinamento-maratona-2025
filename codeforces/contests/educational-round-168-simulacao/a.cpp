#include <bits/stdc++.h>
using namespace std;

void solve(){
    string s;
    bool ins=false;
    cin>>s;
    string ans = "";
    ans += s[0];
    for(unsigned int i=1; i<s.size(); i++){
        if(s[i] == ans[i-1] && ins==false){
            if(s[i] == 'a') ans += "b";
            else ans += "a";
            ins=true;
        } 
        ans += s[i];
    }
    if(!ins){
        if(ans[0] == 'a') ans = "b" + ans;
        else ans = "a" + ans;
    }
    cout<<ans<<endl;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t; cin>>t;
    while(t--) solve();
    return 0;
}