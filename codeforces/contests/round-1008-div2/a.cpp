#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve(){
    int n, x, soma=0;
    cin>>n>>x;
    vector<int> a(n);
    for(int i=0; i<n; i++) {
      cin>>a[i];
      soma += a[i];
    }

    if(soma / n == x && soma % n == 0) cout<<"YES\n";
    else cout<<"NO\n";
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t=1;
    cin>>t;
    while(t--) solve();
    return 0;
}