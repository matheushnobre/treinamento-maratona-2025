#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    ll a, b, k;
    cin>>a>>b>>k;

    if(k == 1) cout<<a<<endl;
    else if(k==2) cout<<b<<endl;
    else{
        for(int i=3; i<=k; i++){
            ll temp = (b+1) ^ a;
            a = b;
            b = temp;
        }
        cout<<b<<endl;
    }

    return 0;
}