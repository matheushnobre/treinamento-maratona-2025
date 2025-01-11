#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n, m, k=0;
    string a, b;
    cin>>n>>m>>a>>b;

    int i=0, j=0;
    while(i < n && j < m){
        while(j < m && b[j] != a[i])
            j++;
        if(j < m) k++;
        i++;
        j++;
    }

    cout<<k<<endl;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--)
        solve();
    return 0;
}