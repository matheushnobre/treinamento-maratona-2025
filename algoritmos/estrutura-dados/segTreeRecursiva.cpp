// Minimum SegTree

#include <bits/stdc++.h>
using namespace std;

#define MAX 100010
int v[MAX];
int seg[4*MAX];
const int inf = 1e9+10;

int build(int p, int l, int r){
    if(l == r) return seg[p] = v[l];
    int m = (l+r)/2;
    return seg[p] = min(build(2*p, l, m), build(2*p+1, m+1, r));
}

int query(int a, int b, int p, int l, int r){
    if(b < l || r < a) return inf; // não está no intervalo
    if(a <= l && r <= b) return seg[p]; // está inteiramente contido
    int m = (l+r)/2;
    return min(query(a, b, 2*p, l, m), query(a, b, 2*p+1, m+1, r));
}

int update(int i, int x, int p, int l, int r){
    if(i < l || r < i) return seg[p];
    if(l == r) return seg[p] = x;
    int m = (l+r)/2;
    return seg[p] = min(update(i, x, 2*p, l, m), update(i, x, 2*p+1, m+1, r));
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, m;
    cin>>n>>m;
    for(int i=0; i<n; i++) cin>>v[i];
    build(1, 0, n-1);

    int o, a, b;
    while(m--){
        cin>>o>>a>>b;;
        if(o==1){
            update(a, b, 1, 0, n-1);
        } else{
            cout<<query(a, b-1, 1, 0, n-1)<<endl;
        }
    }
    return 0;
}