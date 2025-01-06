#include <bits/stdc++.h>
using namespace std;

typedef unsigned int ui;

int solve(){
    string s;
    cin>>s;
    int answer=1;
    bool bloco01 = true;

    for(ui i=1; i<s.size(); i++){
        if(s[i] != s[i-1]){
            if(bloco01 && s[i] == '1') 
                bloco01=false;
            else 
                answer++;
        }
    }
    cout<<answer<<endl;
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