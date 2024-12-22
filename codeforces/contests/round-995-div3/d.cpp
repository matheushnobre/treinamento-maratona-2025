#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define MAX 1000010
#define INF 100000000

ll buscaMin(ll minimo, vector<ll> &valores){
    if(valores[valores.size()-1] < minimo) return INF;

    int inicio = 0, fim = valores.size()-1;  
    int meio = (inicio + fim) / 2; 

    while(inicio < fim){
        if(fim - inicio == 1){
            if(valores[inicio] >= minimo) return inicio;
            else return fim;
        }

        if(valores[meio] >= minimo){
            fim = meio;
            meio = (inicio + fim) / 2;
            
        } else{
            inicio = meio;
            meio = (inicio + fim) / 2;
        }
    }

    return meio;
}

ll buscaMax(ll maximo, vector<ll> &valores){
    if(valores[0] > maximo) return -1;

    int inicio = 0, fim = valores.size()-1;  
    int meio = (inicio + fim) / 2; 

    while(inicio < fim){
        if(fim - inicio == 1){
            if(valores[fim] <= maximo) return fim;
            else return inicio;
        }

        if(valores[meio] <= maximo){
            inicio = meio;
            meio = (inicio + fim) / 2;
        } else{
            fim = meio;
            meio = (inicio + fim) / 2;
        }
    }

    return meio;
}

void solve(){
    ll n, x, y, st=0, ans=0;
    cin>>n>>x>>y;
    vector<ll> valores(n);
    for(int i=0; i<n; i++){
        cin>>valores[i];
        st += valores[i];
    }
    sort(valores.begin(), valores.end());
    for(int i=0; i<n; i++){
        ll zero = 0;
        ll minimo = max(zero, st - valores[i] - y);
        ll maximo = st - valores[i] - x;
        int ind1 = buscaMin(minimo, valores);
        int ind2 = buscaMax(maximo, valores);
        if(ind2 - ind1 >= 0) ans += (ind2+1 - ind1);
        if(minimo <= valores[i] && maximo >= valores[i]) ans--;

    }
    ans /= 2;
    cout<<ans<<endl;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--)
        solve();
    return 0;
}