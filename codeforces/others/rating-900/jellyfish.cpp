#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    ll a, b, v;
    int t, n;
    cin>>t;
    while(t--){
        cin>>a>>b>>n;
        ll answer = b;
        for(int i=0; i<n; i++){
            cin>>v;
            answer += min(v, a-1);
        }
        cout<<answer<<endl;
    }
    return 0;
}