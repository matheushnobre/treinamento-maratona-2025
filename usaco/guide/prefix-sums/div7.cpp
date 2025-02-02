#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve(){
    int n; cin>>n;
    vector<ll> a(n+1), p(n+1);
    for(int i=1; i<=n; i++){
        cin>>a[i];
        p[i] = p[i-1] + a[i];
    }

    int maior=0;
    for(int i=1; i<=n; i++){
        int j=1;
        while(i - j > maior && i > j){
            if((p[i] - p[j]) % 7 == 0) maior = i-j;
            j++;
        }
    }

    cout<<maior<<endl;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    freopen("div7.in", "r", stdin);
    freopen("div7.out", "w", stdout);
    
    solve();
    return 0;
}