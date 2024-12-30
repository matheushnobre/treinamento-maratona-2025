#include <bits/stdc++.h>
using namespace std;

int solve(){
    int c, k, cons=0;
    string r;
    cin>>c>>k>>r;
    for(char l : r){
        if(l == '0') cons++;
        else cons = 0;

        if(cons > k){
            cout<<"yes\n";
            return 0;
        }
    }

    cout<<"no\n";
    return 0;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--) solve();
    return 0;
}