#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve(){
    int n; cin>>n;
    vector<int> x(n-1), a(n);
    for(int i=0; i<n-1; i++) cin>>x[i];

    a[0] = x[0] + 1;
    for(int i=1; i<n-1; i++){
        if (a[i-1] + x[i-1] > x[i])
            a[i] = a[i-1] + x[i-1];
        else{
            ll temp = x[i]+1;
            ll mod = temp % a[i-1];
            if(mod == x[i])
                a[i] = temp;
            else
                a[i] = temp + (temp-mod) + x[i-1] - mod;
        }
    }
    a[n-1] = a[n-2] + x[n-2];
    
    for(ll i : a) cout<<i<<" ";
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