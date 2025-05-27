#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n; cin>>n;
    for(int a=0; a<=n; a++){
        for(int b=0; b<=n; b++){
            int aux = (a+b) * (a+b);
            //cout<<a<<" "<<b<<" "<<aux<<endl;
            if(aux == n){
                cout<<a<<" "<<b<<endl;
                return;
            } else if(aux > n){
                break;
            }
        }
    }

    cout<<-1<<endl;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t=1;
    cin>>t;
    while(t--) solve();
    return 0;
}