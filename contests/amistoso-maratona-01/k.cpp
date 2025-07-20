#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n, k;
    string s;
    cin>>n>>k>>s;

    int ab=k/2, fec=k/2;
    string ans = "";

    for(int i=0; i<n; i++){
        if(s[i] == '('){
            if(ab>0){
                ab--;
                ans += '(';
            }
        } else{
            if(fec>0){
                fec--;
                ans+=')';
            }
        }
    }

    cout<<ans<<endl;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}