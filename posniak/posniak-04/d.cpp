#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned int ui;
const ll inf = 1e18;
const int mod = 1e9+7;

int solve(){
    int n; char c;
    cin>>n;
    vector<int> a(n);
    for(int i=0; i<2; i++){
        for(int j=0; j<n; j++){
            cin>>c;
            if(c=='0') a[j]=1;
        }
    }
    bool saida=true;
    for(int i=0; i<n; i++){
        if(!a[i]){
            saida=false;
        }
    }

    if(saida) cout<<"YES\n";
    else cout<<"NO\n";
    return 0;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t=1; 
    cin>>t;
    while(t--) solve();
}