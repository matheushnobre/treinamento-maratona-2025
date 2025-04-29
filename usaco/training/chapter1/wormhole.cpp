/*
ID: matheus30
TASK: wormhole
LANG: C++                 
*/             

#include <bits/stdc++.h>
using namespace std;

#define INF 1000000010

int n, ans=0;
vector<pair<int, int>> a(12);
vector<int> pareado(12, -1);

int direita(int v){
    int retorno = -1;
    for(int i = 0; i < n; i++){
        if(a[i].second == a[v].second && a[i].first > a[v].first)
            if(retorno == -1 || a[i].first < a[retorno].first)
                retorno = i;        
    }
    return retorno;
}


int ehCiclo(){
    for(int i=0; i<n; i++){
        vector<int> visitados(n);
        
        int v = i;
        while(v != -1){
            if(visitados[v]) return 1;
            visitados[v] = 1;

            v = direita(pareado[v]);
        }
    }

    return 0;
}

void geraCombinacao(){
    int i;
    for(i=0; i<n; i++)
        if(pareado[i] == -1) break;
    
    if(i == n) ans += ehCiclo();

    for(int j=i+1; j<n; j++){
        if(pareado[i] == -1 && pareado[j] == -1){
            pareado[i] = j;
            pareado[j] = i;
            geraCombinacao();
            pareado[i] = -1;
            pareado[j] = -1;
        }
    }
}

int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    freopen("wormhole.in", "r", stdin);
    freopen("wormhole.out", "w", stdout);
    
    cin>>n;
    for(int i=0; i<n; i++) cin>>a[i].first>>a[i].second;
    geraCombinacao();

    cout<<ans<<endl;

    return 0;
}