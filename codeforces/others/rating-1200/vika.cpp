#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define INF 1e6

void solve(){
    int n, k, v;
    cin>>n>>k;
    int vetor[n];
    int aux[n+1][3]; // [indice de quando apareceu por ultimo, maiorDistancia, segundaMaiorDistancia]

    for(int i=0; i<=n; i++) {
        aux[i][0] = -1;
        aux[i][1] = 0;
        aux[i][2] = 0;
    }

    for(int i=0; i<n; i++){
        cin>>v;
        vetor[i] = v;
        int d;
        if(aux[v][0] == -1) d = i;
        else d = i - aux[v][0] - 1;
        aux[v][0] = i;

        if(d > aux[v][1]){
            aux[v][2] = aux[v][1];
            aux[v][1] = d;
        } else if( d > aux[v][2]){
            aux[v][2] = d;
        }
    }

    int answer=INF;
    for(int i=1; i<=n; i++){
        if(aux[i][0] == -1) continue;
        
        int ud = n - 1 - aux[i][0];
        //cout<<ud<<endl;
        if(ud > aux[i][1]){
            aux[i][2] = aux[i][1];
            aux[i][1] = ud;
        } else if(ud > aux[i][2]){
            aux[i][2] = ud;
        }

        if(aux[i][1] % 2 == 0) aux[i][1] = aux[i][1] / 2;
        else aux[i][1] = (aux[i][1] - 1) / 2;

        int temp;
        if(aux[i][1] > aux[i][2]) temp = aux[i][1];
        else temp = aux[i][2];
        answer = min(answer, temp);

    }

    cout<<answer<<endl;
}

int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    int t;
    cin>>t;
    while(t--) solve();
    return 0;
}