#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    vector<int> ans;

    int i=1;
    while(n != 0){
       // cout<<n<<" "<<i<<" "<<n%10<<endl;
        if(n % 10 != 0) ans.push_back(n % 10 * i);
        n/=10;
        i*=10;
    }

    cout<<ans.size()<<endl;
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