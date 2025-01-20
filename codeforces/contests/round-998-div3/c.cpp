#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned int ui;
const ll inf = 1e18+10;
const int mod = 1e9+7;

void solve(){
    int n, k, v, ans=0;
    cin>>n>>k;
    map<int, int> mapa;
    for(int i=0; i<n; i++){
        cin>>v;
        if(mapa[k-v]>0){
            ans++;
            mapa[k-v]--;
        } else{
            mapa[v]++;
        }
    }

    cout<<ans<<endl;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t=1;
    cin>>t;
    while(t--)
        solve();
    return 0;
}