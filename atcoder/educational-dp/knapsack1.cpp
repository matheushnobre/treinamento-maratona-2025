#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, w; 
    cin>>n>>w;
    ll pesos[n], valor[n];

    for(int i=0; i<n; i++) cin>>pesos[i]>>valor[i];
    ll mochila[n+1][w+1];
    for(int j=0; j<=w; j++) mochila[0][j] = 0;

    for(int i=0; i<n; i++){
        int p = pesos[i], v = valor[i];
        for(int j=0; j<=w; j++){
            if(j < p) 
                mochila[i+1][j] = mochila[i][j];
            else
                mochila[i+1][j] = max(mochila[i][j-p] + v, mochila[i][j]);
        }
    }

    cout<<mochila[n][w]<<endl;

    return 0;
}


