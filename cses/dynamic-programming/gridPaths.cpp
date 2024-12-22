#include <bits/stdc++.h>
using namespace std;

#define MAX 1010
typedef long long ll;
char matriz[MAX][MAX];
ll answers[MAX][MAX];
bool feito[MAX][MAX];
ll mod;
int n;

ll solve(int i, int j){
    if(matriz[i][j] == '*') return 0;
    if(i == n-1 && j == n-1) return 1;
    if(feito[i][j]) return answers[i][j];
    ll qtd = 0;
    if(i+1 < n) qtd += solve(i+1, j);
    if(j + 1 < n) qtd += solve(i, j+1);
    answers[i][j] = qtd % mod;
    feito[i][j] = 1;
    return answers[i][j];
}

int main(){
    cin>>n;
    mod = 1e9 + 7;
    for(int i=0; i<n; i++)
        for(int j=0; j<n; j++)
            cin>>matriz[i][j];
    cout<<solve(0, 0)<<endl;;
    return 0;
}

