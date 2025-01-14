#include <bits/stdc++.h>
using namespace std;

void solve(){
    string s;
    cin>>s;
    int oa=0, ob=0;
    for(char c : s){
        if(c == 'A') oa++;
        else ob++;
    }
    if(oa>ob) cout<<"A\n";
    else cout<<"B\n";
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t; cin>>t;
    while(t--) solve();
    return 0;
}