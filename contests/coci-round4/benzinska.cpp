#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned int ui;
const ll inf = 1e18+10;
const int mod = 1e9+7;

int solve(){
    int n;
    ll d, x;
    cin>>n>>d>>x;

    vector<pair<int, int>> val = {{x, 0}};
    vector<int> cid(n);
    for(int i=0; i<n; i++) cin>>cid[i];

    for(int i=0; i<n; i++){
        ll a;
        cin>>a;
        val.push_back({cid[i], a});
    }

    sort(val.begin(), val.end());
    priority_queue<int> fila;

    int ans=0;
    for(auto par : val){
        int i = par.first;
        while (i > d && !fila.empty()){
            d += fila.top();
            fila.pop();
            ans++;
        }

        if(i > d && fila.empty()){
            cout<<-1<<endl;
            return 0;
        }

        fila.push(par.second);
    }

    cout<<ans<<endl;
    return 0;

}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t=1;
    //cin>>t;
    while(t--) solve();
    return 0;
}