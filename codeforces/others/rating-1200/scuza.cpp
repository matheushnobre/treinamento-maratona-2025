#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve(){
    int n, q;
    cin>>n>>q;
    vector<ll> a(n), ps(n), aux(n);
    for(int i=0; i<n; i++){
        cin>>a[i];
        if(i==0){
            ps[i] = a[i];
            aux[i] = a[i];
        } else{
            ps[i] = a[i] + ps[i-1];
            aux[i] = max(a[i], aux[i-1]);
        }
    }

    for(int i=0; i<q; i++){
        int ki, ind;
        cin>>ki;
        ind = upper_bound(aux.begin(), aux.end(), ki) - aux.begin();
        if(ind <= 0) cout<<0<<" ";
        else cout<<ps[ind-1]<<" ";
    }

    cout<<endl;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t=1;
    cin>>t;
    while(t--)solve();
    return 0;
}