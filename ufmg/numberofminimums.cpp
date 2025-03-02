#include <bits/stdc++.h>
using namespace std;

#define MAX 100010
vector<int> v(MAX);
vector<pair<int, int>> seg(4*MAX);

pair<int, int> combina(pair<int, int> a, pair<int, int> b){
    if(a.first == b.first){
        return {a.first, a.second+b.second};
    } else if(a.first < b.first){
        return a;
    } else{
        return b;
    }
}

pair<int, int> build(int p, int l, int r){
    if(l == r) return seg[p] = {v[l], 1};
    int m = (l+r)/2;
    return seg[p] = combina(build(2*p, l, m), build(2*p+1, m+1, r));
}

pair<int, int> query(int a, int b, int p, int l, int r){
    if(r < a || b < l) return {2000000010, -1};
    if(a <= l && r <= b) return seg[p];
    int m = (l+r)/2;
    return combina(query(a, b, 2*p, l, m), query(a, b, 2*p+1, m+1, r));
}

pair<int, int> update(int i, int x, int p, int l, int r){
    if(i < l || r < i) return seg[p];
    if(l == r) return seg[p] = {x, 1};
    int m = (l+r)/2;
    return seg[p] = combina(update(i, x, 2*p, l, m), update(i, x, 2*p+1, m+1, r));
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
        cin>>o>>a>>b;
        if(o == 1){
            update(a, b, 1, 0, n-1);
        } else{
            pair<int, int> q = query(a, b-1, 1, 0, n-1);
            cout<<q.first<<" "<<q.second<<endl;
        }
    }
}