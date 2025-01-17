#include <bits/stdc++.h>
using namespace std;

void solve(){
    unsigned int n;
    cin>>n;
    vector<int> saida = {1};
    for(unsigned int i=1; i<=n/2; i++)
        saida.push_back(i);
    int j=1;
    while(saida.size() < n){
        saida.push_back(j);
        j++;
    }
    for(int i : saida) cout<<i<<" ";
    cout<<endl;
}

int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    int t; cin>>t;
    while(t--) solve();
    return 0;
}