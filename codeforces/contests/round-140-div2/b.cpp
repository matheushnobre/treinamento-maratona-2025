#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve(){
    int n, s;
    cin>>n>>s;
    vector<int> a(n);
    int soma=0, q1=0;

    for(int i=0; i<n; i++){
        cin>>a[i];
        if(a[i] == 1) q1++;
        soma += a[i];
    }

    if(soma > s){
        for(int i : a) cout<<i<<" ";
        cout<<endl;
    } else if(soma == s-1){
        int cont[3] = {0};
        for(int i : a) cont[i]++;

        for(int i=0; i<cont[1]; i++) cout<<1<<" ";
        for(int i=0; i<cont[2]; i++) cout<<"2 ";
        for(int i=0; i<cont[0]; i++) cout<<"0 ";
        cout<<endl;
    } else{
        cout<<-1<<endl;
    }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t=1;
    cin>>t;
    while(t--) solve();
    return 0;
}