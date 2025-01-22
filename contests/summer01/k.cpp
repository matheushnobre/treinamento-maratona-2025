#include <bits/stdc++.h>
using namespace std;

int solve(){
    int n;
    string s;
    cin>>n;
    vector<int> a(n);
    for(int i=0; i<n; i++) cin>>a[i];
    cin>>s;

    int p=0;
    for(int i=0; i<n-1; i++){
        if(i < p && s[i] == '0') {
            std::cout<<"NO\n";
            return 0;
        }  
         if(s[i] == '0' && a[i] > i+1){
            std::cout<<"NO\n";
            return 0;
        }
        p = max(p,a[i]-1);
    }

    std::cout<<"YES\n";
    return 0;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t=1;
    //cin>>t;
    while(t--) solve();
    return 0;
}