#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve(){
    int n, atual;
    cin>>n;
    vector<int> ans(n+1);
    map<int, int> last;

    for(int i=1; i<=n; i++){
        cin>>atual;

        int ult = last[atual];
        if(ult == 0)
            ans[i] = ans[i-1]+1;
        else
            ans[i] = min(ans[ult], ans[i-1]+1);

        last[atual] = i;
    }

    cout<<ans[n]<<endl;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}