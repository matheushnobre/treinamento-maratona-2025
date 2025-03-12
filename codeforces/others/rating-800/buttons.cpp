#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve(){
    int a, b, c;
    cin>>a>>b>>c;
    
    if(c % 2 == 1){
      a++;
      c--;
    }
    
    a += c/2;
    b += c/2;
    
    if(a>b) cout<<"First\n";
    else cout<<"Second\n";
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--) solve();
    return 0;
}