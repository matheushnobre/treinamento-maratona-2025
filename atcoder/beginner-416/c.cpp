#include <bits/stdc++.h>
using namespace std;

int n, k, x;
vector<string> p(10);
vector<string> ans;

void juntar(string atual, int f){
    if(f == 0) {
        ans.push_back(atual);
        return;
    }

    for(int i=0; i<n; i++){
        juntar(atual + p[i], f-1);
    }
}

void solve(){
    cin>>n>>k>>x;
    for(int i=0; i<n; i++) cin>>p[i];
    juntar("", k);
    sort(ans.begin(), ans.end());
    cout<<ans[x-1]<<endl;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t=1;
    //cin>>t;
    while(t--) solve();
    return 0;
}