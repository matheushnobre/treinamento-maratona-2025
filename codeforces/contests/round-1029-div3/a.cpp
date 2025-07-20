#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve(){
    int n, x;
    cin>>n>>x;

    int f=-1, l=-1;
    vector<int> a(n);
    for(int i=0; i<n; i++){
        cin>>a[i];
        if(a[i] == 1){
            if(f==-1) f = i;
            l = i;
        }
    }

    if(l-f+1 <= x) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t=1;
    cin>>t;
    while(t--) solve();
    return 0;
}