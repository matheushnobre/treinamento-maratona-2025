// Jigsaw of Shadows
// Este problema foi tentado durante a Final Brasileira, porém recebemos WA.

// Observações quanto a correção:
// Utilizei primeiramente a mesma abordagem da final, adicionando apenas o setprecision no cout, 
// entretanto recebi TLE.
// Posteriormente, mudei para a solução abaixo.

#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int a, n, x, h;
    long double saida=0, pi = 3.1415926535;
    vector<pair<int, long double>> e;

    cin>>a>>n;
    long double tg = tan(pi * a/180);

    for(int i=0; i<n; i++){
        cin>>x>>h;
        e.push_back({x, x+h/tg});
    }

    sort(e.begin(), e.end());
    saida = e[0].second - e[0].first;
    long double last = e[0].second;
    for(int i=1; i<n; i++){
        int start = e[i].first;
        long double end = e[i].second;
        if(start > last){
            saida += end - start;
            last = end;
        } 
        else if(end > last){
            saida += end - last;
            last = end;
        }
    }

    cout<<fixed<<setprecision(20)<<saida<<endl;
    return 0;
}