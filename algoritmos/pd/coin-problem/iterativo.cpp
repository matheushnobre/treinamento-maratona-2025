#include <bits/stdc++.h>
using namespace std;

#define INF 10e7
#define MAX 1000010

int main(){
    int n, x, q;
    int coins[MAX];
    int answer[MAX];

    cin>>n>>x>>q;
    for(int i=0; i<n; i++) cin>>coins[i];

    for(int i=1; i<=x; i++){
        answer[i] = INF;
        for(int j=0; j<n; j++)
            if(i - coins[j] >= 0) answer[i] = min(answer[i], answer[i-coins[j]]+1);
    }

    while(q--){
        cin>>x;
        int saida = answer[x];
        if(saida == INF) cout<<-1<<endl;
        else cout<<saida<<endl;
    }
    return 0;
}