#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, v;
    cin>>n;
    vector<int> c(n+1);
    while(cin>>v){
        c[v]++;
    }

    for(int i=1; i<=n; i++)
        cout<<c[i]<<" ";
    
    return 0;
}