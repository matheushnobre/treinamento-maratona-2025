#include <bits/stdc++.h>
using namespace std;

#define MAX 200010
const int inf = 1e9+10;

vector<int> a(MAX);
vector<pair<int, int>> seg(2*MAX);
int n, q;

pair<int, int> build(int p, int l, int r){
    if(l == r) return seg[p] = {a[l], 1};
    int m = (l+r)/2;
    pair<int, int> left = build(2*p, l, m);
    pair<int, int> right = build(2*p+1, m+1, r);
    if(left.first == right.first) 
        return seg[p] = {left.first, left.second + right.second};
    return seg[p] = min(left, right);
}

pair<int, int> update(int k, int x, int p, int l, int r){
    if(k < l || r < k) return seg[p];
    if(l == r) return seg[p] = {x, 1};
    int m = (l+r)/2;
    pair<int, int> left = update(k, x, 2*p, l, m);
    pair<int, int> right = update(k, x, 2*p+1, m+1, r);
    if(left.first == right.first) 
        return seg[p] = {left.first, left.second + right.second};
    return seg[p] = min(left, right);
}

pair<int, int> query(int a, int b, int p, int l, int r){
    if(a > r || b < l) return {inf, 0};
    if(a <= l && r <= b) return seg[p];
    int m = (l+r) / 2;
    pair<int, int> left = query(a, b, 2*p, l, m);
    pair<int, int> right = query(a, b, 2*p+1, m+1, r);
    if(left.first == right.first) 
        return {left.first, left.second + right.second};
    return min(left, right);
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
            update(a, b, 1, 0, n-1);
        } else{
            pair<int, int> cons = query(a, b-1, 1, 0, n-1);
            cout<<cons.first<<" "<<cons.second<<endl;
        }
    }
}
