#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve(){
    int n, k;
    cin>>n>>k;
    vector<int> ans(n);
    
    ans[n-1] = n-1;
    ans[n-2] = n;
    
    int aux;
    if(k % 2 == 0) aux = n-1;
    else aux = n;
    for(int i=0; i<n-2; i++) ans[i] = aux;
    
    for(int i : ans) cout<<i<<" ";
    cout<<endl;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t=1;
    cin>>t;
    while(t--) solve();
    return 0;
}