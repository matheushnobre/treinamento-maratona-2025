#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned int ui;
const ll inf = 1e18+10;
const int mod = 1e9+7;

void solve(){
    int n, m;
    string s;
    cin>>n>>m;
    int freq[7] = {0};
    cin>>s;
    for(char c : s) freq[c-'A']++;

    int ans=0;
    for(int i : freq) 
        if(i < m) ans += m-i;
    
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