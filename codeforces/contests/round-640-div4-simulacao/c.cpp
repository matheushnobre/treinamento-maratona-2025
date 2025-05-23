#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n, k;
    cin>>n>>k;

    int x = k / (n-1);
    int aux = k % (n-1);
    if(aux == 0) aux--;
    //cout<<x<<" "<<aux<<endl;
    cout<<x*n+aux<<endl;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t=1;
    cin>>t;
    while(t--) solve();
    return 0;
}