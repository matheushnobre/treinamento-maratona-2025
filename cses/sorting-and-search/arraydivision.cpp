#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve(){
    int n, k, maior=0;
    cin>>n>>k;
    vector<int> v(n);
    for(int i=0; i<n; i++) {
        cin>>v[i];
        maior = max(maior, v[i]);
    }

    ll l=maior, r=1e18, ans=1e18;
    while(l <= r){
        ll m = (l+r)/2;
        ll d=1, temp=0, maiorSoma=0;
        for(int i=0; i<n; i++){
            if(temp + v[i] > m){
                maiorSoma = max(maiorSoma, temp);
                temp = 0;
                d++;
            } temp += v[i];
            if(d > k) break; 
        }

        if(d <= k) {
            ans = max(temp, maiorSoma);
            r = m-1;
        } else{
            l = m+1;
        }
    }

    cout<<ans<<endl;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}