#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve(){
    string s;
    cin>>s;

    int a=0, f=0;
    for(int i=0; i<s.size()-1; i++){
        if(s[i] == '(') a++;
        else f++;
        if(f >= a){
            cout<<"YES"<<endl;
            return;
        }
    }

    cout<<"NO"<<endl;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--) solve();
    return 0;
}