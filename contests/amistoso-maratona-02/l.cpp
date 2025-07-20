#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    vector<int> a(n);
    map<int, int> freq;

    int ans = 0;

    for(int i=0; i<n; i++){
        cin>>a[i];
        if(a[i] < 0) ans = a[i];
        freq[a[i]]++;
    }

    if(ans != 0){
        cout<<ans<<endl;
        return;
    }

    for(int i=0; i<n; i++){
        if(a[i] > ans) ans = a[i];
    }

    cout<<ans<<endl;

}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--) solve();
    return 0;
}