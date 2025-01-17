#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n; 
    string s;
    cin>>n>>s;

    stack<int> pilha;
    int ans=0;
    for(int i=0; i<n; i++){
        if(i % 2 == 0){
            if(pilha.empty()) pilha.push(i);
            else{
                ans += i - pilha.top();
                pilha.pop();
            }
        } else{
            char c = s[i];
            if(c == '(') pilha.push(i);
            else{
                ans += i - pilha.top();
                pilha.pop();
            }
        }
    }

    cout<<ans<<endl;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t; cin>>t;
    while(t--) solve();
    return 0;
}