#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const int mod = 1e9+7;
const ll inf = 1e18+10;

void solve(){
    int n;
    cin>>n;

    int control[n][n];
    memset(control, 0, sizeof(control));
    char matriz[n][n];

    int ans=0;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin>>matriz[i][j];
        }
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<n-1; j++){
            if(matriz[i][j] == 'N' && matriz[i][j+1] == 'N' && control[i][j] == 0){
                ans++;
                control[i][j]=1;
                control[i][j+1]=1;
            }
        }
    }

    cout<<ans<<endl;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t=1;
    //cin>>t;
    while(t--) solve();
    return 0;
}