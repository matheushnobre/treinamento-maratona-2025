#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define MAXN 1010
#define MAXS 8010

int n;
int a[MAXN];
ll dp[5][MAXN][MAXS];

ll solve(int qtd, int ponto, int soma){
    if(dp[qtd][ponto][soma] != -1)
        return dp[qtd][ponto][soma];
    
        
    if(ponto == n) {
        if(qtd == 0 && soma == 0) dp[qtd][ponto][soma] = 1;
        else dp[qtd][ponto][soma] = 0;
        return dp[qtd][ponto][soma];
    }

    ll aux = solve(qtd, ponto+1, soma);
    if(soma >= a[ponto] && qtd >= 1){
        aux += solve(qtd-1, ponto+1, soma-a[ponto]);
    }

    return dp[qtd][ponto][soma] = aux;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin>>n;

    for(int i=0; i<n; i++){
        cin>>a[i];
        a[i] += 1000;
    }
    
    for(int i=0; i<5; i++)
        for(int j=0; j<MAXN; j++)
            for(int k=0; k<MAXS; k++)
                dp[i][j][k] = -1;
    
    int q;
    cin>>q;
    while(q--){
        int s;
        cin>>s;
        cout<<solve(4, 0, s+4000)<<endl;
    }
    return 0;
}