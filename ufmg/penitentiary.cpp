#include <bits/stdc++.h>
using namespace std;

typedef pair<int, int> ii;
typedef vector<ii> vii;
const int inf = 1e9+10;

int build1(int p, int l, int r, vii& g, vector<int>& seg1){
    if(l == r) return seg1[p] = g[l].first;
    int m = (l+r)/2;
    return seg1[p] = max(build1(2*p, l, m, g, seg1), build1(2*p+1, m+1, r, g, seg1));
}

int update1(int i, int x, int p, int l, int r, vector<int>& seg1){
    if(i < l || r < i) return seg1[p];
    if(l == r) return seg1[p] = x;
    int m = (l+r)/2;
    return seg1[p] = max(update1(i, x, 2*p, l, m, seg1), update1(i, x, 2*p+1, m+1, r, seg1));
}

int query1(int a, int b, int p, int l, int r, vector<int>& seg1){
    if(b < l || r < a) return -inf;
    if(a <= l && r <= b) return seg1[p];
    int m = (l+r)/2;
    return max(query1(a, b, 2*p, l, m, seg1), query1(a, b, 2*p+1, m+1, r, seg1));
}

int build2(int p, int l, int r, vii& g, vector<int>& seg2){
    if(l == r) return seg2[p] = g[l].second;
    int m = (l+r)/2;
    return seg2[p] = min(build2(2*p, l, m, g, seg2), build2(2*p+1, m+1, r, g, seg2));
}

int update2(int i, int x, int p, int l, int r, vector<int>& seg2){
    if(i < l || r < i) return seg2[p];
    if(l == r) return seg2[p] = x;
    int m = (l+r)/2;
    return seg2[p] = min(update2(i, x, 2*p, l, m, seg2), update2(i, x, 2*p+1, m+1, r, seg2));
}

int query2(int a, int b, int p, int l, int r, vector<int>& seg2){
    if(b < l || r < a) return inf;
    if(a <= l && r <= b) return seg2[p];
    int m = (l+r)/2;
    return min(query2(a, b, 2*p, l, m, seg2), query2(a, b, 2*p+1, m+1, r, seg2));
}


int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, q, a, b, i, l, r;
    char c;

    cin>>n>>q;
    vii g(n+1);
    for(int i=1; i<=n; i++){
        cin>>a>>b;
        g[i] = {a, b};
    }

    vector<int> seg1(4*n), seg2(4*n);
    build1(1, 1, n, g, seg1);
    build2(1, 1, n, g, seg2);

    while(q--){
        cin>>c;
        if(c == 'C'){
            cin>>i>>l>>r;
            update1(i, l, 1, 1, n, seg1);
            update2(i, r, 1, 1, n, seg2);
        } else{
            cin>>l>>r;
            int maximo = query2(l, r, 1, 1, n, seg2);
            int minimo = query1(l, r, 1, 1, n, seg1);
            if(maximo < minimo) cout<<0<<endl;
            else cout<<abs(maximo-minimo+1)<<endl;  
        }
    }
}