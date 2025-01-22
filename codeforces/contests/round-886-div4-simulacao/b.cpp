#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned int ui;
const ll inf = 1e18+10;
const int mod = 1e9+7;

void solve(){
    int n, ans=0, a, b, s=0;
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>a>>b;
        if(a<=10){
            if(b>ans){
                ans=b;
                s=i+1;
            }
        }
    }
    cout<<s<<endl;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0); 
    int t=1;
    cin>>t;
    while(t--) solve();
    return 0;
}