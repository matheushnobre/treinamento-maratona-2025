#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define MAX 100010

ll calc(ll m, vector<ll>&a, int n){
    ll ans = 0;
    for(int i=0; i<n; i++)
        ans += abs(m - a[i]);
    return ans;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin>>n;
    vector<ll> a(n);
    for(int i=0; i<n; i++) cin>>a[i];

    sort(a.begin(), a.end());

    if(n % 2 == 0)
        cout<<min(calc(a[n/2-1], a, n), calc(a[n/2], a, n));
    else
        cout<<calc(a[n/2], a, n);
    
    return 0;
}