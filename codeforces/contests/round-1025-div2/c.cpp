#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve(){
    int n, ans, aux=0;
    cin>>n;

    cout<<"digit"<<endl;
    cin>>ans;
    
    cout<<"digit"<<endl;
    cin>>ans;
    
    cout<<"add -8"<<endl;
    cin>>ans;
    
    cout<<"add -4"<<endl;
    cin>>ans;

    cout<<"add -2"<<endl;
    cin>>ans;

    cout<<"add -1"<<endl;
    cin>>ans;
    
    cout<<"add "<<(n-1)<<endl;
    cin>>ans;
    
    cout<<"!"<<endl;
    cin>>ans;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--) solve();
    fflush(stdout);
    return 0;
}