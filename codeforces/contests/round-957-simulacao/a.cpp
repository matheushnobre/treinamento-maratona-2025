#include <bits/stdc++.h>
using namespace std;

void solve(){
    int a, b, c;
    cin>>a>>b>>c;
    for(int i=0; i<5; i++){
        int m = min(a, b);
        m = min(m, c);
        if(a == m) a++;
        else if(b == m) b++;
        else c++;
    }
    cout<<a*b*c<<endl;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--) solve();
    return 0;
}