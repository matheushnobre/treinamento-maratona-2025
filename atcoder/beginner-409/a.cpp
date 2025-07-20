#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve(){
    int n;
    string t, a;
    cin>>n>>t>>a;
    for(int i=0; i<n; i++){
        if(a[i] == 'o' && t[i] == 'o'){
            cout<<"Yes"<<endl;
            return;
        }
    }

    cout<<"No"<<endl;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t=1;
   // cin>>t;
    while(t--) solve();
    return 0;
}