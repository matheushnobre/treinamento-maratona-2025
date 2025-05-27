#include <bits/stdc++.h>
using namespace std;

const int MAX = 100010;
const int INF = 1e9+10;

vector<int> v(MAX, 0), seg(4*MAX, 0), lazy(4*MAX, -1);

int build(int p, int l, int r) {
    if (l == r) return seg[p] = v[l];
    int m = (l + r) / 2;
    return seg[p] = min(build(2*p, l, m), build(2*p+1, m+1, r));
}

// Aplica o valor pendente de lazy no nó atual e propaga para os filhos se necessário
void unlazy(int p, int l, int r) {
    if (lazy[p] != -1) {
        seg[p] = lazy[p]; // aplica o valor ao segmento atual
        if (l != r) {
            lazy[2*p] = lazy[p];
            lazy[2*p+1] = lazy[p];
        }
        lazy[p] = -1;
    }
}

// Atualiza o intervalo [a, b] somando x
int update(int a, int b, int x, int p, int l, int r) {
    unlazy(p, l, r);
    if (b < l || r < a) return seg[p]; // fora do intervalo
    if (a <= l && r <= b) {
        lazy[p] = x;
        unlazy(p, l, r);
        return seg[p];
    }
    int m = (l + r) / 2;
    return seg[p] = min(update(a, b, x, 2*p, l, m), update(a, b, x, 2*p+1, m+1, r));
}

// Consulta o mínimo no intervalo [a, b]
int query(int a, int b, int p, int l, int r) {
    unlazy(p, l, r);
    if (b < l || r < a) return INF; // fora do intervalo
    if (a <= l && r <= b) return seg[p];
    int m = (l + r) / 2;
    return min(query(a, b, 2*p, l, m), query(a, b, 2*p+1, m+1, r));
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, q;
    cin>>n>>q;

    while (q--) {
        int op;
        cin>>op;
        if (op == 1) {
            int l, r, x;
            cin>>l>>r>>x;
            update(l, r-1, x, 1, 0, n-1);
        } else {
            int l;
            cin>>l;
            cout<<query(l, l, 1, 0, n-1)<<endl;
        }
    }
}
