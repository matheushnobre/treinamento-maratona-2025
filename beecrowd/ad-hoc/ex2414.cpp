#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve(){
    int maior=1;
    int v=1;
    while(v!=0){
      cin>>v;
      maior = max(maior, v);
    }
    cout<<maior<<endl;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t=1;
    //cin>>t;
    while(t--) solve();
    return 0;
}