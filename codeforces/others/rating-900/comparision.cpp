#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n, cons=1, ans=1;
    string s;
    cin>>n>>s;
    for(int i=1; i<n; i++){
        if(s[i] == s[i-1]) cons++;
        else{
            ans=max(ans, cons);
            cons=1;
        }
    }
    ans = max(cons, ans);
    cout<<ans+1<<endl;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--) solve();
    return 0;
}