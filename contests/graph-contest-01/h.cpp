#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n; 
    cin>>n;
    vector<string> matriz(n);
    for(int i=0; i<n; i++)
        cin>>matriz[i];

    for(int i=0; i<n-1; i++){
        for(int j=0; j<n-1; j++){
            //cout<<matriz[i][j]<<" ";
            if(matriz[i][j] == '1'){
                if(matriz[i+1][j] == '0' && matriz[i][j+1] == '0'){
                    cout<<"NO"<<endl;
                    return;
                }
            }
        } //cout<<endl;
    }

    cout<<"YES"<<endl;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t=1;
    cin>>t;
    while(t--) solve();
    return 0;
}