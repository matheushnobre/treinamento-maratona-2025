#include <bits/stdc++.h>
using namespace std;


typedef long long ll;
#define MAXN 100010
ll a[MAXN];
ll tree[2*MAXN];

void build(ll n){
    for(ll i=n; i<2*n; i++)
        tree[i] = a[i-n];
    for(ll i=n-1; i>0; i--)
        tree[i] = tree[2*i] + tree[2*i+1];
}

ll consulta(ll inicio, ll fim, ll n){
    inicio += n;
    fim += n;
    ll soma = 0;
    while(inicio < fim){
        if(inicio % 2 == 1){
            soma += tree[inicio];
            inicio ++;
        }
        if (fim % 2 == 1){
            fim--;
            soma += tree[fim];
        }
        inicio /= 2 ;
        fim /= 2;
    }
    return soma;
}

void update(ll i, ll valor, ll n){
    i += n;
    tree[i] = tree[i] + valor;
    while (i>=1){
        i /= 2;
        tree[i] = tree[2*i] + tree[2*i+1];
    }
}

int main(){
    ios::sync_with_stdio(false); cin.tie(0);
    ll n, q, x, y, z;
    cin>>n>>q;
    for(ll i=0; i<n; i++) cin>>a[i];
    build(n);

    while(q--){
        cin>>x>>y>>z;
        if(x==2) cout<<consulta(y-1, z, n)<<endl;
        else update(y-1, z, n);
    }
    

    return 0;
}