#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve(){
    int n, q, x;
    cin>>n>>q;
    vector<ll> vetor(n);
    bool verificador[32] = {false};

    for(int i=0; i<n; i++) {
        cin>>vetor[i];
    }
    for(int i=0; i<q; i++){
        cin>>x;
        if(verificador[x] == true) continue;
        verificador[x] = true;
        ll p = pow(2, x);
        ll m = pow(2, x-1);
        for(int j=0; j<n; j++)
            if(vetor[j] % p == 0) vetor[j] += m;
    }
    for(int i=0; i<n; i++) cout<<vetor[i]<<" ";
    cout<<endl;
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