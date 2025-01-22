#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned int ui;
const ll inf = 1e18+10;
const int mod = 1e9+7;

void solve(){
    int n, v, ans=0; 
    cin>>n;
    vector<int> a(n+1);
    map<int, int> freq;
    for(int i=0; i<n; i++){
        cin>>v;
        freq[v]++;
    }

    for(auto x : freq){
        v = x.first;
        int f = x.second;

        while(v <= n){
            a[v] += f;
            ans = max(ans, a[v]);
            v += x.first;
        }
    }

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