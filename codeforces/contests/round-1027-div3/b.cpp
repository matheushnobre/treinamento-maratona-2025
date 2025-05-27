#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n, k;
    string s;
    cin>>n>>k>>s;

    int q0=0, q1=0;
    for(char c : s){
        if(c == '0') q0++;
        else q1++;
    }

    while(k > 0){
        if(q0 > q1){
            q0 -= 2;
        } else{
            q1 -= 2;
        }
        k--;
    }

    if(q0 == q1) cout<<"YES"<<endl;
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