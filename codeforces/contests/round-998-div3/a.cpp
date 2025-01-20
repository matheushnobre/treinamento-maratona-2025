#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned int ui;
const ll inf = 1e18+10;
const int mod = 1e9+7;

void solve(){
    int a1, a2, a4, a5, ans=0;
    cin>>a1>>a2>>a4>>a5;
    vector<int> a = {a1, a2, 0, a4, a5};
    for(int i=-1000; i<=1000; i++){
        a[2] = i;
        int temp=0;
        for(int j=0; j<3; j++){
            if(a[j+2] == a[j] + a[j+1]) temp++;
        } 
        ans=max(ans, temp);
    }
    cout<<ans<<endl;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t=1;
    cin>>t;
    while(t--)
        solve();
    return 0;
}