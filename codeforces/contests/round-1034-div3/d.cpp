#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n, k, qtd1=0;
    string s;
    cin>>n>>k>>s;

    for(int i=0; i<n; i++) 
        if(s[i] == '1') qtd1++;

    if(qtd1 <= k){
        cout<<"Alice"<<endl;
        return;
    }

    if(k*2 <= n){
        cout<<"Bob"<<endl;
        return;
    }

    int aux=0;
    for(int i=0; i<k; i++){
        if(s[i] == '1') aux++;
    }
    
    if(qtd1 - aux <= k){
        cout<<"Alice"<<endl;
        return;
    }

    aux = 0;
    for(int i=n-1; i>=n-k; i--){
        if(s[i] == '1') aux++;
    }

    if(qtd1 - aux <= k){
        cout<<"Alice"<<endl;
        return;
    }

    cout<<"Bob"<<endl;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t=1;
    cin>>t;
    while(t--) solve();
    return 0;
}