#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n, m;
    string s, c;
    cin>>n>>m>>s;
    vector<int> ind(m);
    for(int i=0; i<m; i++) cin>>ind[i];
    cin>>c;

    sort(ind.begin(), ind.end());
    sort(c.begin(), c.end());

    int j=0;
    for(int i=0; i<m; i++){
        if(i!=0 && ind[i]==ind[i-1]) continue;
        s[ind[i]-1] = c[j];
        j++;
    }

    cout<<s<<endl;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t; cin>>t;
    while(t--) solve();
    return 0;
}