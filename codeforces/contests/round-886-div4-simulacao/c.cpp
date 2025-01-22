#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned int ui;
const ll inf = 1e18+10;
const int mod = 1e9+7;

void solve(){
    char e[8][8];
    string word="";
    for(int i=0; i<8; i++){
        for(int j=0; j<8; j++){
            cin>>e[i][j];
            if(e[i][j] != '.') word += e[i][j];
        }
    }
    cout<<word<<endl;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0); 
    int t=1;
    cin>>t;
    while(t--) solve();
    return 0;
}