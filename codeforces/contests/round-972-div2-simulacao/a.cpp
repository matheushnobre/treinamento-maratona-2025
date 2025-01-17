#include <bits/stdc++.h>
using namespace std;

void solve(){
    string v = "aeiou";
    int n; cin>>n;
    string s = "";
    
    int r = n/5;
    int r2 = n - (r*5);
    
    if(r > 0){
        for(int i=0; i<5; i++){
            for(int j=0; j<r; j++) {
                s+=v[i];
            }
            if(r2>0){
                s+=v[i];
                r2--;
            }
        }
    }

    else
        for(int i=0; i<n; i++) s+=v[i];
    
    cout<<s<<endl;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t; cin>>t;
    while(t--) solve();
    return 0;
}