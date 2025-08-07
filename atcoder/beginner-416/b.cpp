#include <bits/stdc++.h>
using namespace std;

void solve(){
    string s, t="";
    cin>>s;

    bool flag=true;
    for(int i=0; i<s.size(); i++){
        if(s[i] == '#') {
            t += '#';
            flag = true;
        }
        else if(flag) {
            t += 'o';
            flag = false;
        } else{
            t += '.';
        }
    }
    cout<<t<<endl;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t=1;
    //cin>>t;
    while(t--) solve();
    return 0;
}