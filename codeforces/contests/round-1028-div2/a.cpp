#include <bits/stdc++.h>
using namespace std;

void solve(){
    int a, b, c, d;
    cin>>a>>b>>c>>d;

    int s1 = min(d, b);
    int s2 = min(c, a);

   //cout<<s1<<" "<<s2<<endl;
    if(s1 <= s2) cout<<"Gellyfish"<<endl;
    else cout<<"Flower"<<endl;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t=1;
    cin>>t;
    while(t--) solve();
    return 0;
}