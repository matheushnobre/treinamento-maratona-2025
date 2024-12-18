#include <bits/stdc++.h>
using namespace std;

#define INF 10e7
#define MAX 1000010
int coins[MAX];
int answer[MAX];

// Solução recursiva (sem memoização)
int solveRecursivo(int n, int x){
    if(x < 0) return INF;
    if(x == 0) return 0;
    int melhor = INF;
    for(int i=0; i<n; i++)
        melhor = min(melhor, solveRecursivo(n, x-coins[i])+1);
    return melhor;
}

// Solução com Memoização
int solveRecursivoMemo(int n, int x){
    if(x < 0) return INF;
    if(x == 0) return 0;
    if(answer[x] != 0) return answer[x];
    int melhor = INF;
    for(int i=0; i<n; i++)
        melhor = min(melhor, solveRecursivoMemo(n, x-coins[i])+1);
    answer[x] = melhor;
    return melhor;
}

int main(){
    int n, x;
    cin>>n>>x;
    for(int i=0; i<n; i++) cin>>coins[i];
    int saida = solveRecursivoMemo(n, x);
    if(saida == INF) cout<<-1<<endl;
    else cout<<saida<<endl;
    return 0;
}