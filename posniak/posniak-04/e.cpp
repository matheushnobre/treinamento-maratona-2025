#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned int ui;
const ll inf = 1e18;
const int mod = 1e9+7;

void solve(){
    int n;
    cin>>n;
    vector<int> e(n), qtd(n), ff(n);
    for(int i=1; i<n; i++){
        cin>>e[i];
        e[i]--;
        qtd[e[i]]++;
    }

    for(int i=0; i<n; i++){
        if(qtd[i]==0 && i!=0)
            ff[e[i]]++;
    }

    bool ans=true;
    for(int i=0; i<n; i++){
        if(qtd[i] > 0 && ff[i] < 3) ans=false;
    }

    if(ans) cout<<"Yes\n";
    else cout<<"No\n";
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t=1; 
    //cin>>t;
    while(t--) solve();
}