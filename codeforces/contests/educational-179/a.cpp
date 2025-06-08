#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const int inf = 1e9+10;
const int mod = 1e9+7;

void solve(){
    int x, c=3;
    cin>>x;

    if(x == 1) {
        cout<<3<<endl;
        return;
    }

    int ans[3] = {1, 1, 3}, i=0;
    while (ans[0] < x || ans[1] < x || ans[2] < x){
      //  for(int i : ans) cout<<i<<" ";
       // cout<<endl;

        int menor = inf;
        if(i == 0) menor = min(ans[1], ans[2]);
        else if(i == 1) menor = min(ans[0], ans[2]);
        else menor = min(ans[0], ans[1]);
        ans[i] = menor*2+1;
        c++;
        i = (i+1) % 3;
    }

    cout<<c<<endl;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t=1;
    cin>>t;
    while(t--) solve();
    return 0;
}