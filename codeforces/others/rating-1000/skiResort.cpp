#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll fatorial(int n){
    if(n <= 0) return 0;
    ll s = 1;
    for(int i=1; i<=n; i++) s *= i;
    return s;
}

void solve(){
    int n, k, c=0;
    ll q, a, answer=0;
    cin>>n>>k>>q;
    for(int i=0; i<n; i++){
        cin>>a;
        if(a <= q){
            c++;
            if(c >= k) answer += c-k+1;
        }
        else{
            c = 0;
        }
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