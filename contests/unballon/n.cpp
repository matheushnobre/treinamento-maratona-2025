#include <bits/stdc++.h>
using namespace std;

#define MAX 100010
vector<int> v(MAX);
vector<int> seg1(4*MAX), seg2(4*MAX);
const int inf = 1e9;

int build1(int p, int l, int r){
    if(l == r) return seg1[p] = v[l];
    int m = (l+r)/2;
    return seg1[p] = min(build1(2*p, l, m), build1(2*p+1, m+1, r));
}

int query1(int a, int b, int p, int l, int r){
    if(b < l || r < a) return inf;
    if(a <= l && r <= b) return seg1[p];
    int m = (l+r)/2;
    return min(query1(a, b, 2*p, l, m), query1(a, b, 2*p+1, m+1, r));
}

int build2(int p, int l, int r){
    if(l == r) return seg2[p] = v[l];
    int m = (l+r)/2;
    return seg2[p] = max(build2(2*p, l, m), build2(2*p+1, m+1, r));
}

int query2(int a, int b, int p, int l, int r){
    if(b < l || r < a) return -inf;
    if(a <= l && r <= b) return seg2[p];
    int m = (l+r)/2;
    return max(query2(a, b, 2*p, l, m), query2(a, b, 2*p+1, m+1, r));
}

void solve(){
    int n, q;
    cin>>n>>q;

    for(int i=0; i<n; i++) cin>>v[i];
    build1(1, 0, n-1);
    build2(1, 0, n-1);

    while(q--){
        int l, r;
        cin>>l>>r;

        int a = query1(l-1, r-1, 1, 0, n-1);
        int b = query2(l-1, r-1, 1, 0, n-1);

        if(a == 1 && b == (r-l+1)) cout<<"TAK"<<endl;
        else cout<<"NIE"<<endl;
    }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}