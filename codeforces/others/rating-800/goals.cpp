#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n, soma=0, v;
    cin>>n;
    for(int i=0; i<n-1; i++){
        cin>>v;
        soma += v;
    }
    cout<<0-soma<<endl;
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