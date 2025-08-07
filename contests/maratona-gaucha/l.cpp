#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);


    int n;
    cin>>n;
    vector<ll> a(n);

    for(int i=0; i<n; i++) {
        cin>>a[i];
    }

    sort(a.begin(), a.end());
    ll maior = a[n-1];
    ll smaior = a[n-2];

    if(maior != smaior){
        cout<<maior<<endl;
        return 0;
    }

    ll ans = 1e18;
    for(int i=0; i<n; i++){
        ll aux = maior-a[i];
        int index = upper_bound(a.begin(), a.end(), aux) - a.begin();
        if(index >= n) continue;
        if(index == i) continue;
        
        ans = min(ans, a[i] + a[index]);
    }

    if(ans != 1e18) cout<<ans<<endl;
    else cout<<-1<<endl;

    return 0;
}