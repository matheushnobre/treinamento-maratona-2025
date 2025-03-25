#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve(){
    int n;
    string a1, a2;
    cin>>n>>a1>>a2;

    for(int i=0; i<n; i++){
        if(a1[i] != a2[i]){
            if(a1[i] == 'R' || a2[i] == 'R'){
                cout<<"NO"<<endl;
                return;
            }
        }
    }

    cout<<"YES"<<endl;
    return;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t=1;
    cin>>t;
    while(t--) solve();
    return 0;
}