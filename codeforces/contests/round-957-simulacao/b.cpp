#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve(){
    ll n, k, maximo=0, answer=0;
    cin>>n>>k;
    vector<ll> vetor(k);
    for(int i=0; i<k; i++){
        cin>>vetor[i];
        maximo = max(maximo, vetor[i]);
        answer += 2*vetor[i] - 1;
    }
    answer -= 2*maximo-1;
    cout<<answer<<endl;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--) solve();
    return 0;
}