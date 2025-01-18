#include <bits/stdc++.h>
using namespace std;

int solve(){
    int n;
    string s;
    cin>>n>>s;
    int x=0, y=0;
    for(char c : s){
        if(c=='U') y++;
        else if(c=='R') x++;
        else if(c=='D') y--;
        else x--;
        if(x==1 && y==1){
            cout<<"YES\n";
            return 0;
        }
    }
    cout<<"NO\n";
    return 0;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin>>t;
    while(t--) solve();
    return 0;
}