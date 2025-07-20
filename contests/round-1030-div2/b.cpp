#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n; 
    cin>>n;

    int o = (n-3)*2 + min(3, n);
    cout<<o<<endl;
    for(int i=1; i<=n; i++){
        if(i == 1) cout<<"1 1 "<<n<<endl;
        else if(i == 2) cout<<"2 1 "<<n-1<<endl;
        else if(i == n) cout<<n<<" 2 "<<n<<endl;
        else{
            cout<<i<<" "<<1<<" "<<(n-i+1)<<endl;
            cout<<i<<" "<<(n-(i-2))<<" "<<n<<endl;
        }
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