#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve(){
    ll n, answer=0, i=1;
    cin>>n;
    while(n % i == 0){
        answer++;
        i++;
    }
    cout<<answer<<endl;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--)
        solve();
    return 0;
}