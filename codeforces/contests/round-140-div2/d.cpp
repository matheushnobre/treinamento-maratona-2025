#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int query(int a, int b, int p, int l, int r, vector<int>& seg){
    if(b < l || r < a) return 0; 
    if(a <= l && r <= b) return seg[p]; 
    int m = (l+r)/2;
    return query(a, b, 2*p, l, m, seg) + query(a, b, 2*p+1, m+1, r, seg);
}

int update(int i, int x, int p, int l, int r, vector<int>& seg){
    if(i < l || r < i) return seg[p];
    if(l == r) return seg[p] = x;
    int m = (l+r)/2;
    return seg[p] = update(i, x, 2*p, l, m, seg) + update(i, x, 2*p+1, m+1, r, seg);
}

void solve(){
    int n;
    cin>>n;
    vector<int> idx(n+1);

    for(int i=1; i<=n; i++){
        int v;
        cin>>v;
        idx[v] = i;
    }

    vector<int> seg(4*n);
    int ans = 0;
    for(int i=1; i<=n; i++){
        int a = (idx[i]-1) - query(1, idx[i], 1, 1, n, seg);
        int b = (n-idx[i]) - query(idx[i], n+1, 1, 1, n, seg);
        ans += min(a, b);
        update(idx[i], 1, 1, 1, n, seg);
    }
    cout<<ans<<endl;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t=1;
    cin>>t;
    while(t--) solve();
    return 0;
}