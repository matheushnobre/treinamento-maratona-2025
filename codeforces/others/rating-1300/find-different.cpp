#include <bits/stdc++.h>
using namespace std;


void solve(){
    int n, q, l, r;
    cin>>n;
    vector<int> a(n);
    vector<int> ps(n);

    for(int i=0; i<n; i++){
        cin>>a[i];
        if(i==0) ps[i] = 1;
        else{
            if(a[i] == a[i-1]) ps[i] = ps[i-1];
            else ps[i] = ps[i-1] + 1;
        }
    }

    cin>>q;
    while(q--){
        cin>>l>>r;
        int j = upper_bound(ps.begin(), ps.end(), ps[l-1]) - ps.begin();
        j++;
        if(j <= r) cout<<l<<" "<<j<<endl;
        else cout<<"-1 -1"<<endl;
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