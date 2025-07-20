#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve(){
    string s;
    cin>>s;

    map<char, int> freq;
    ll ans = s.size();

    for(char c : s){
        ans += freq[c]*2;
        freq[c]++;
    }

    cout<<ans<<endl;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}