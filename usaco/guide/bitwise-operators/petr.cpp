#include <bits/stdc++.h>
using namespace std;

int solve(){
    int n;
    cin>>n;
    vector<int> p(n);
    for(int i=0; i<n; i++) cin>>p[i];

    for(int v=0; v<(1<<n); v++){
        int sum=0;
        for(int i=0; i<n; i++){
            if (v & (1<<i)) sum += p[i];
            else sum -= p[i];
        }
        if(sum % 360 == 0){
            cout<<"YES\n";
            return 0;
        }
    }

    cout<<"NO\n";
    return 0;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}