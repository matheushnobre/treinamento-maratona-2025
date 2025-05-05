#include <bits/stdc++.h>
using namespace std;

#define MAXN 100010
int pai[MAXN], peso[MAXN];

// Find irá trabalhar recursivamente até o pai de um elemento ser ele mesmo.
int find(int x){
    if (pai[x] == x) return x;
    return pai[x] = find(pai[x]);
}

// Basta fazer o patriarca de um tornar-se patriarca do outro
void join(int x, int y){
    // busca os patriarcas para fazer a união
    x = find(x);
    y = find(y);

    if(x == y) return;

    if(peso[x] < peso[y]) pai[x] = y;
    if(peso[x] > peso[y]) pai[y] = x;

    if(peso[x] == peso[y]){
        pai[x] = y;
        peso[y]++;
    }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    // Inicializando vetor pai:
    for(int i=0; i<MAXN; i++) {
        pai[i] = i;
        peso[i] = 0;
    }
    
    return 0;
}