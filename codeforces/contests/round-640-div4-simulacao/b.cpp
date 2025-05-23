#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n, k;
    cin>>n>>k;

    int aux = n - k + 1;
    if(aux <= 0){
        cout<<"NO"<<endl;
        return;
    }

    if(aux % 2 == 1){
        cout<<"YES"<<endl;
        cout<<aux<<" ";
        for(int i=0; i<k-1; i++) cout<<"1 ";
        cout<<endl;
        return;
    }

    aux = n - (2*(k-1));
    if(aux <= 0){
        cout<<"NO"<<endl;
        return;
    }

    if(aux % 2 == 0){
        cout<<"YES"<<endl;
        cout<<aux<<" ";
        for(int i=0; i<k-1; i++) cout<<"2 ";
        cout<<endl;
        return;
    }

    cout<<"NO"<<endl;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t=1;
    cin>>t;
    while(t--) solve();
    return 0;
}