#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned int ui;
const ll inf = 1e18+10;
const int mod = 1e9+7;

int solve(){
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0; i<n; i++) cin>>a[i];
    for(int i=0; i<n-1; i++){
        int temp = min(a[i], a[i+1]);
        a[i] -= temp;
        a[i+1] -= temp;
    }
    for(int i=1; i<n; i++){
        if(a[i] < a[i-1]){
            cout<<"NO\n";
            return 0;
        }
    }
    cout<<"YES\n";
    return 0;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t=1;
    cin>>t;
    while(t--)
        solve();
    return 0;
}