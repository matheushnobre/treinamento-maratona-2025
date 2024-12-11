#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    long long a, b;
    cin>>t;
    while(t--){
        cin>>a>>b;
        if((a+b) % 3 == 0){
            int x = (-2*a + b) / -3;
            int y = (b - x) / 2;
            if(x < 0 || y < 0) cout<<"NO\n";
            else cout<<"YES\n";
        } else cout<<"NO\n";
    }
}