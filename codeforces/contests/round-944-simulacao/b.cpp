#include <bits/stdc++.h>
using namespace std;

typedef unsigned int ui;

int solve(){
    string s;
    cin>>s;
    for(ui i=1; i<s.size(); i++){
        if(s[i] != s[i-1]){
            swap(s[i], s[i-i]);
            cout<<"YES\n"<<s<<endl;
            return 0;
        }
    }
    cout<<"NO\n";
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--) solve();
    return 0;
}