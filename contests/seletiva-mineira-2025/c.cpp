#include <bits/stdc++.h>
using namespace std;

const int MAX = 200010;
typedef long long ll;
ll v[MAX], seg[4*MAX], lazy[4*MAX];

void unlazy(int p, int l, int r){
    if(lazy[p] != 0){
        seg[p] += lazy[p];
        if(l != r){
            lazy[2*p] += lazy[p];
            lazy[2*p+1] += lazy[p];
        }
    }
    lazy[p] = 0;
}

int update(int a, int b, ll x, int p, int l, int r){
    unlazy(p, l, r);
    if(b < l || r < a) return seg[p];
    if(a <= l && r <= b){
        lazy[p] += x;
        unlazy(p, l, r);
        return seg[p];
    }
    int m = (l+r)/2;
    return seg[p] = update(a, b, x, 2*p, l, m) + update(a, b, x, 2*p+1, m+1, r);
}

ll query(int a, int b, int p, int l, int r){
    unlazy(p, l, r);
    if(b < l || r < a) return 0LL;
    if(a <= l && r <= b) return seg[p];
    int m = (l+r)/2;
    return query(a, b, 2*p, l, m) + query(a, b, 2*p+1, m+1, r);
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, q;
    cin>>n>>q;
    vector<ll> a(n+1), b(n+1);

    for(int i=1; i<=n; i++)
        cin>>a[i];
    
    while(q--){
        char o;
        ll x, y;
        cin>>o>>x>>y;

        if(o == 'A'){
            ll qtd = query(x, x, 1, 1, n);
            b[x] += a[x] * qtd;
            a[x] += y;
            update(x, x, -qtd, 1, 1, n);
            //update(x+1, x+1, qtd, 1, 1, n);
        } else{
            update(x, y, 1, 1, 1, n);
        }
        
       // for(int i=1; i<=n; i++) cout<<b[i]<<" ";
       // cout<<endl;
    }

    for(int i=1; i<=n; i++){
        int qtd = query(i, i, 1, 1, n);
        b[i] += a[i] * qtd;
        update(i, i, -qtd, 1, 1, n);
    }

    for(int i=1; i<=n; i++) cout<<b[i]<<" ";
}