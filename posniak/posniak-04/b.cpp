#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned int ui;
const ll inf = 1e18;
const int mod = 1e9+7;

void solve(){
    bool resolvido[26] = {0};
    int ans=0, n;
    string s;
    cin>>n>>s;
    for(char c : s){
        if(!resolvido[c-'A']) ans++;
        resolvido[c-'A']=1;
        ans++;
    }
    cout<<ans<<endl;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t=1; 
    cin>>t;
    while(t--) solve();
}