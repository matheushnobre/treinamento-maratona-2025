#include <bits/stdc++.h>
using namespace std;

int solve(){
    int n;
    string s;
    cin>>n>>s;
    
    int r = sqrt(n);
    if(r*r != n){
        cout<<"No"<<endl;
        return 0;
    }

    char matriz[r][r];
    for(int i=0; i<r; i++){
        for(int j=0; j<r; j++){
            if(i==0 || j==0 || i==r-1 || j==r-1) matriz[i][j] = '1';
            else matriz[i][j] = '0';
        }
    }

    int k=0;
    for(int j=0; j<r; j++)
        for(int i=0; i<r; i++){
            if(matriz[i][j] != s[k]){
                cout<<"No"<<endl;
                return 0;
            }
            k++;
        }

    cout<<"Yes"<<endl;
    return 0;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t; cin>>t;
    while(t--) solve();
    return 0;
}