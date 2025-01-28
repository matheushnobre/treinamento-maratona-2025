#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned int ui;
const ll inf = 1e18+10;
const int mod = 1e9+7;

void solve(){
    int n, m, l, c;
    char s;
    cin>>n>>m;

    bool matriz[n+1][n+1];
    memset(matriz, 0, sizeof(matriz));

    for(int cont=0; cont<m; cont++){
        cin>>s>>l>>c;
        if(s == 'R' || s == 'Q'){
            for(int i=1; i<=n; i++) matriz[i][c] = 1;
            for(int j=1; j<=n; j++) matriz[l][j] = 1;

            if(s == 'Q'){
                int d = c-l;
                for(int i=1; i<=n; i++){
                    int j = i+d;
                    if(j>0 && j<=n) matriz[i][j] = 1;

                    j = c + (l-i);
                    if(j>0 && j<=n) matriz[i][j] = 1;
                }
            }
        } 
        else{
            matriz[l][c] = 1;
            int dx[8] = {-2, -2, 2, 2, -1, -1, 1, 1};
            int dy[8] = {-1, 1, -1, 1, -2, 2, -2, 2};
            for(int aux=0; aux<8; aux++){
                int i = l + dx[aux];
                int j = c + dy[aux];
                if(i > 0 && i<=n && j>0 && j<=n) matriz[i][j] = 1;
            }
        }
    }

    int ans=0;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            if(matriz[i][j]) ans++;
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