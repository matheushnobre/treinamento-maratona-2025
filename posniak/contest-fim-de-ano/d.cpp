#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n, l, r;
    bool saida=false;
    cin>>n;
    vector<pair<int, int>> e;

    for(int i=0; i<n; i++){
        cin>>l>>r;
        e.push_back({l, 1});
        e.push_back({r, 2});
    }

    sort(e.begin(), e.end());
    int soma=0;
    for(int i=0; i<2*n; i++){
        if(e[i].second == 1) soma++;
        else soma--;
        if(soma == n) saida=true;
    }

    if(saida) cout<<"YES\n";
    else cout<<"NO\n";
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--)
        solve();
    return 0;
}