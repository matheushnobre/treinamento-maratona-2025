#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const ll INF = 1e18;

bool cmp(pair<ll, ll>& a, pair<ll, ll>& b){
    if(a.second != b.second) return a.second < b.second;
    return a.first > b.first;
}

void solve(){
    ll n;
    cin>>n;

    vector<pair<ll, ll>> e(n);
    for(int i=0; i<n; i++)
        cin>>e[i].first>>e[i].second;
    
    if(n == 1){
        cout<<1<<endl;
        return;
    }

    ll custo = INF;
    ll temp;

    sort(e.begin(), e.end(), cmp);
    // coluna mais a direita
    ll aux=e[n-1].second, lb=0, lc=INF, cb=0, cc=INF;
    for(int i=n-2; i>=0; i--){
        lb = max(lb, e[i].first);
        lc = min(lc, e[i].first);
        cb = max(cb, e[i].second);
        cc = min(cc, e[i].second);  
    }
    temp = (lb - lc + 1) * (cb - cc + 1);
    if(temp < n) temp = (lb - lc + 2) * (cb - cc + 1);
    custo = min(custo, temp);

    // coluna mais a esquerda
    aux = e[0].first, lb=0, lc=INF, cb=0, cc=INF;
    for(int i=1; i<n; i++){
        lb = max(lb, e[i].first);
        lc = min(lc, e[i].first);
        cb = max(cb, e[i].second);
        cc = min(cc, e[i].second);
    }
    temp = (lb - lc + 1) * (cb - cc + 1);
    if(temp < n) temp = (lb - lc + 2) * (cb - cc + 1);
    custo = min(custo, temp);


    // linha de cima
    sort(e.begin(), e.end());
    aux=e[0].first, lb=0, lc=INF, cb=0, cc=INF;
    for(int i=1; i<n; i++){
        lb = max(lb, e[i].first);
        lc = min(lc, e[i].first);
        cb = max(cb, e[i].second);
        cc = min(cc, e[i].second);
    }
    temp = (lb - lc + 1) * (cb - cc + 1);
    if(temp < n) temp = (lb - lc + 1) * (cb - cc + 2);
    custo = min(custo, temp);

    //linha de baixo
    aux=e[n-1].first, lb=0, lc=INF, cb=0, cc=INF;
    for(int i=n-2; i>=0; i--){
        lb = max(lb, e[i].first);
        lc = min(lc, e[i].first);
        cb = max(cb, e[i].second);
        cc = min(cc, e[i].second);
    }
    temp = (lb - lc + 1) * (cb - cc + 1);
    if(temp < n) temp = (lb - lc + 1) * (cb - cc + 2);
    custo = min(custo, temp);

    cout<<custo<<endl;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t=1;
    cin>>t;
    while(t--) solve();
    return 0;
}