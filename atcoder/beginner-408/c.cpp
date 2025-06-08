#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n, m;
    cin>>n>>m;
    vector<int> aux(n+1);

    for(int i=0; i<m; i++){
        int l, r;
        cin>>l>>r;
        aux[l-1]++;
        aux[r]--;
    }

    int ans=aux[0];
    for(int i=1; i<n; i++){
        aux[i] += aux[i-1];
        ans = min(aux[i], ans);
    }
    
    cout<<ans<<endl;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t=1;
    //cin>>t;
    while(t--) solve();
    return 0;
}