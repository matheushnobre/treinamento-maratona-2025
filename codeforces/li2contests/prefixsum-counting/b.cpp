#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n, k, l, r;
    cin>>n;
    vector<int> a(n+1), z(n+1);
    for(int i=1; i<=n; i++) {
        cin>>a[i];
        if(a[i]==0) z[i] = z[i-1]+1;
        else z[i] = z[i-1];
    }

    cin>>k;
    for(int i=0; i<k; i++){
        cin>>l>>r;
        cout<<z[r] - z[l-1]<<" ";
    }

    return 0;
}