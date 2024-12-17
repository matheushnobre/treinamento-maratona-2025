#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    int n, m, l, r;
    vector<pair<int, int>> e;
    cin>>n>>m;

    for(int i=0; i<m; i++){
        cin>>l>>r;
        e.push_back({l, 0});
        e.push_back({r, 1});
    }

    sort(e.begin(), e.end());
    int qtd=0, saida=0, last=0;
    for(int i=0; i<2*m; i++){
        if(qtd == 0) saida += e[i].first - last - 1;
        if(e[i].second == 0) qtd += 1;
        else qtd -= 1;
        last = e[i].first;
    }
    saida += n - e[2*m-1].first;
    cout<<saida<<endl;
    return 0;
}