#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int n, par=0, imp=0;
    cin>>n;
    vector<int> a(n);
    for(int i=0; i<n; i++) {
        cin>>a[i];
        if(a[i] % 2 == 0) par++;
        else imp++;
    }

    for(int i=0; i<n; i++){
        if(a[i] % 2 == 0 && par == 1) cout<<i+1<<endl;
        else if(a[i] % 2 == 1 && imp == 1) cout<<i+1<<endl;
    }
    return 0;
}