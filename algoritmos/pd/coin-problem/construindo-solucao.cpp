#include <bits/stdc++.h>
using namespace std;

#define INF 10e7
#define MAX 1000

int main(){
    int n, x, q;
    int coins[MAX];
    int answer[MAX];
    int primeiro[MAX];

    cin>>n>>x>>q;
    for(int i=0; i<n; i++) cin>>coins[i];

    for(int i=1; i<=x; i++){
        answer[i] = INF;
        for(int j=0; j<n; j++)
            if(i - coins[j] >= 0 && answer[i-coins[j]] + 1 < answer[i]) {
                answer[i] = answer[i-coins[j]] + 1;
                primeiro[i] = coins[j];
            }
    }

    while(q--){
        cin>>x;
        int saida = answer[x];
        if(saida == INF) cout<<-1<<endl;
        else {
            cout<<saida<<endl;
            while (x != 0){
                cout<<primeiro[x]<<" ";
                x -= primeiro[x];
            } cout<<endl;
        }
    }
    
    return 0;
}