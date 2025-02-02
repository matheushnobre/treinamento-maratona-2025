#include <bits/stdc++.h>
using namespace std;

void solve(int n, int r){
    vector<int> c(n+1);
    int v;
    for(int i=0; i<r; i++){
        cin>>v;
        c[v] = 1;
    }
    if(n == r) cout<<"*"<<endl;
    else{
        for(int i=1; i<=n; i++){
            if(c[i]==0) cout<<i<<" ";
        }
        cout<<endl;
    }

}

int main(){
    ios::sync_with_stdio(0);
    int n, r;
    while(cin>>n>>r){
        solve(n, r);
    }
}