#include <bits/stdc++.h> 
using namespace std;

void solve(){
    int n, k;
    string ans = "YES";
    cin>>n>>k;
    vector<int> a(n);
    for(int i=0; i<n; i++) cin>>a[i];

    int atual = a[k-1];
    sort(a.begin(), a.end());

    int na=1;
    for(int i=0; i<n; i++){
        //cout<<a[i]<<" "<<atual<<endl;
        if(a[i] > atual){
            int tempo = a[i] - atual;
            na += tempo;
            if(na > atual+1) ans = "NO";
            atual = a[i];
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