#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n, j, k;
    cin>>n>>j>>k;
    vector<int> a(n);

    int maior=0;
    for(int i=0; i<n; i++){
        cin>>a[i];
        maior = max(a[i], maior);
    }

    if(maior == a[j-1]){
        cout<<"YES"<<endl;
        return;
    }

    if(k == 1) cout<<"NO"<<endl;
    else cout<<"YES"<<endl;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t=1;
    cin>>t;
    while(t--) solve();
    return 0;
}