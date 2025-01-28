#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve(){
    int n;
    string s;
    cin>>n>>s;
    string s2;
    for(int i=0; i<n; i++) s2 += '1';

    ll ans=0;
    for(int i=1; i<=n; i++){
        int aux = 1;
        while(i * aux <= n && s[i*aux - 1] == '0'){
            if(s2[i*aux-1] == '1') ans += i;
            s2[i*aux-1] = '0';
            aux++;
        }
    }

    cout<<ans<<endl;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t=1;
    cin>>t;
    while(t--)solve();
    return 0;
}