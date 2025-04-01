#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve(){
    string s;
    getline(cin, s);

    for(int i=s.size()/2-1; i>=0; i--) cout<<s[i];
    for(int i=s.size()-1; i>=s.size()/2; i--) cout<<s[i];
    cout<<endl;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    cin.ignore();
    while(t--) solve();
    return 0;
}