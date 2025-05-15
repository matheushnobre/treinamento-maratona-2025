#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const int mod = 1e9+7;
const int inf = 1e9+10;

#define MAX 100010
vector<int> a(MAX), e(MAX);
vector<int> seg(4*MAX);

int n, m;

int build(int p, int l, int r){
    if(l == r) return seg[p] = e[l];
    int meio = (l+r)/2;
    return seg[p] = min(build(2*p, l, meio), build(2*p+1, meio+1, r));
}

// Função query modificada para retornar o primeiro valor menor que X em um intervalo [idx, m]
int query(int p, int l, int r, int idx, int valor){
    if(r < idx || seg[p] > valor) return inf; // O índice está fora do intervalo de consulta ou o valor de seg[p] não é válido.
    if(l == r) return l;
    int meio = (l+r)/2;
    int left = query(2*p, l, meio, idx, valor); // Verifica o resultado da esquerda 
    if(left != inf) return left; 
    return query(2*p+1, meio+1, r, idx, valor); // O resultado da direita só será utilizado se não houver solução à esquerda
}

void solve(){
    cin>>n>>m;

    for(int i=0; i<n; i++) cin>>a[i];
    for(int i=0; i<m; i++) cin>>e[i];
        
    build(1, 0, m-1);

    for(int i=0; i<n; i++){
        int alfajor = a[i];
        int idx = query(1, 0, m-1, 0, alfajor);
        while(idx != inf){
            alfajor %= e[idx];
            idx = query(1, 0, m-1, idx, alfajor);
        }
        cout<<alfajor<<" ";
    }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t=1;
    //cin>>t;
    while(t--) solve();
    return 0;
}