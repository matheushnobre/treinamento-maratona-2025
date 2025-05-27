#include <bits/stdc++.h>
using namespace  std;

typedef long long ll;

void solve(){
    ll n, k;
    cin>>n>>k;
    vector<ll> a(n+1), ans(n+1, -1);
    for(int i=1; i<=n; i++) cin>>a[i];

    stack<pair<ll, int>> pilha;

    for(int i=1; i<=n; i++){
        while(!pilha.empty()){
            ll atual = pilha.top().first;
            int idxatual = pilha.top().second;
            atual = atual + (i - idxatual) * k;
            if(atual > a[i]){
                ans[idxatual] = i;
                pilha.pop();
            }
            else break;
        }
        pilha.push({a[i], i});
    }

    for(int i=1; i<=n; i++){
        while(!pilha.empty()){
            ll atual = pilha.top().first;
            int idxatual = pilha.top().second;
            atual = atual + ((n - idxatual) * k) + (i * k);
            if(atual > a[i]){
                ans[idxatual] = i;
                pilha.pop();
            }
            else break;
        }
    }

    for(int i=1; i<=n; i++) cout<<ans[i]<<" ";
    cout<<endl;

}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}