#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define MAX 200010

vector<ll> a(MAX);
vector<ll> seg(2*MAX);
ll n, q;

ll build(int p, int l, int r){
    if(l == r) return seg[p] = a[l];
    int m = (l+r)/2;
    return seg[p] = build(2*p, l, m) + build(2*p+1, m+1, r);
}

ll update(int k, ll x, int p, int l, int r){
    if(k < l || r < k) return seg[p];
    if(l == r) return seg[p] = x;
    int m = (l+r)/2;
    return seg[p] = update(k, x, 2*p, l, m) + update(k, x, 2*p+1, m+1, r);
}

ll query(int a, int b, int p, int l, int r){
    if(a > r || b < l) return 0LL;
    if(a <= l && r <= b) return seg[p];
    int m = (l+r) / 2;
    return query(a, b, 2*p, l, m) + query(a, b, 2*p+1, m+1, r);
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin>>n>>q;
    for(int i=0; i<n; i++) cin>>a[i];

    build(1, 0, n-1);

    while(q--){
        int o, a, b;
        cin>>o>>a>>b;

        if(o == 1){
            update(a-1, b, 1, 0, n-1);
        } else{
            cout<<query(a-1, b-1, 1, 0, n-1)<<endl;
        }
    }
}
