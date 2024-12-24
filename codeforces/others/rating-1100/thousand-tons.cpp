#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define INF 1e15

void solve(){
    int n;
    cin>>n;
    vector<ll> valores(n);
    for(int i=0; i<n; i++) cin>>valores[i];
    
    ll answer=0;
    for(int k=1; k<n; k++){
        if(n % k != 0) continue;
        ll maior = 0, menor = INF, temp=0;
        for(int i=0; i<n; i+=k){
            temp = 0;
            for(int j=i; j<i+k; j++)
                temp += valores[j];
            maior = max(maior, temp);
            menor = min(menor, temp);
        }
        answer = max(maior - menor, answer);
    }

    cout<<answer<<endl;
}

int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    int t;
    cin>>t;
    while(t--) solve();
    return 0;
}