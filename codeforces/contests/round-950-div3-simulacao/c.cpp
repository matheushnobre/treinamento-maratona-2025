#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned int ui;
const ll inf = 1e18+10;
const int mod = 1e9+7;

void solve(){
    int n, m;
    cin>>n;
    vector<int> a(n), b(n);
    map<int, int> freq;

    for(int i=0; i<n; i++) cin>>a[i];
    for(int i=0; i<n; i++){
        cin>>b[i];
        if(b[i] != a[i]) 
            freq[b[i]]++;
    }

    cin>>m;
    vector<int> d(m);
    for(int i=0; i<m; i++){
        cin>>d[i];
        freq[d[i]]--;
    }

    int last = d[m-1];
    bool pode=false;
    for(int v : b)
        if(v==last) pode=true;
    
    if(pode){
        for(auto x : freq){
            if (x.second > 0) pode=false;
        }      
    }

    if(pode) cout<<"YES\n";
    else cout<<"NO\n";
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t=1;
    cin>>t;
    while(t--) solve();
    return 0;
}