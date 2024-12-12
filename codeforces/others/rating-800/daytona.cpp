#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t, n, k, v;
    cin>>t;
    while(t--){
        bool saida=false;
        cin>>n>>k;
        while(n--){
            cin>>v;
            if(v==k) saida=true;
        }
        if(saida) cout<<"YES\n";
        else cout<<"NO\n";
    }

    return 0;
}