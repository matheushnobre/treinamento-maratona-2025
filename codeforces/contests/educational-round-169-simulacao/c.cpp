#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve(){
    int n;
    ll k, a=0, b=0;
    cin>>n>>k;
    vector<ll> vetor(n);
    for(int i=0; i<n; i++) cin>>vetor[i];
    sort(vetor.rbegin(), vetor.rend());

    for(int i=0; i<n; i++){
        if(i % 2 == 0) a += vetor[i];
        else{
            b += vetor[i];
            if(k > 0) {
                b += min(k, vetor[i-1]-vetor[i]);
                k -= vetor[i-1]-vetor[i];
            }
        }
    }

    cout<<a-b<<endl;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--) solve();
    return 0;
}