#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve(){
    int n; cin>>n;
    ll ans = 0;

    vector<int> a(n);
    for(int i=0; i<n; i++) cin>>a[i];

    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            int y = a[i] + a[j] - 1; // todos menores ou iguais que isso podem entrar
            int x = max(0, a[n-1] - (a[i] + a[j])); // todos maioes que isso podem entrar

            int f1 = upper_bound(a.begin(), a.end(), x) - a.begin();
            f1 = max(j+1, f1);
            int f2 = upper_bound(a.begin(), a.end(), y) - a.begin();
            
            ans += max(0, (f2-f1));
            //cout<<"para i = "<<i<<", j = "<<j<<", x eh "<<x<<", y eh "<<y<<" e f1, f2 = "<<f1<<" "<<f2<<endl;
        }
    }

    cout<<ans<<endl;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t=1;
    cin>>t;
    while(t--) solve();
    return 0;
}