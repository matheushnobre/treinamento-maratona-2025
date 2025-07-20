#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n, q;
    cin>>n>>q;
    vector<int> a(n);
    for(int i=0; i<n; i++) a[i] = i+1;

    int inicio = 0;
    for(int i=0; i<q; i++){
        int t;
        cin>>t;

        if(t == 1){
            int p, x;
            cin>>p>>x;
            a[(p+inicio-1)%n] = x;

        } else if(t == 2){
            int p;
            cin>>p;
            cout<<a[(p+inicio-1)%n]<<endl;

        } else{
            int k;
            cin>>k;
            inicio += k;
            inicio %= n;
        }
    }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t=1;
    //cin>>t;
    while(t--) solve();
    return 0;
}