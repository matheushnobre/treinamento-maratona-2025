#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define INF 1e7

int solve(){
    int n, x, answer=0;
    ll l, r;
    cin>>n>>l>>r>>x;
    vector<int> p(n);
    for(int i=0; i<n; i++) cin>>p[i];

    for(int v=0; v<(1<<n); v++){
        int qtd=0, total=0, menor=INF, maior=-INF;
        for(int i=0; i<n; i++){
            if(v&(1<<i)){
                total += p[i];
                menor = min(menor, p[i]);
                maior = max(maior, p[i]);
                qtd++;
            }
        }

        if(total >= l && total <= r && maior-menor >= x && qtd >= 2)
            answer++;
    }

    cout<<answer<<endl;
    return 0;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}