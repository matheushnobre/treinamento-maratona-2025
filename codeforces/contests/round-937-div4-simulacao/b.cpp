#include <bits/stdc++.h>
using namespace std;

int solve(){
    int n;
    cin>>n;
    for(int i=1; i<=2*n; i++){
        for(int j=1; j<=2*n; j++){
            if(i % 4 == 1 || i % 4 == 2){
                if (j % 4 == 1 || j % 4 == 2) cout<<'#';
                else cout<<'.';
            }
            else{
                if(j % 4 == 3 || j % 4 == 0) cout<<"#";
                else cout<<".";
            }
        } cout<<endl;
    }
    return 0;
}

int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    int t; cin>>t;
    while(t--) solve();
    return 0;
}

