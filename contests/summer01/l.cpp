#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    vector<int> a(n), zeros;

    for(int i=0; i<n; i++){
        cin>>a[i];
        if(a[i]==0) zeros.push_back(i);
    }

    int j=0;
    for(int i=0; i<n; i++){
        if(a[i] == 0) j++;
        int inicio = zeros[max(0, j-1)];
        int proximo;
        if(j >= zeros.size()) proximo = inicio;
        else proximo = zeros[j];
        cout<<min(abs(inicio-i), abs(proximo-i))<<" ";
    }
    cout<<endl;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t=1;
    //cin>>t;
    while(t--) solve();
    return 0;
}