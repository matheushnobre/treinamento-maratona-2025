#include <bits/stdc++.h>
using namespace std;

#define MAX 1000010
typedef long long ll;


int main(){
    int n, x;
    ll mod = 1e9 + 7;
    int moedas[110];
    ll answer[MAX] = {0};
    answer[0] = 1;
    
    cin>>n>>x;
    for(int i=0; i<n; i++) cin>>moedas[i];

    for(int i=1; i<=x; i++){
        for(int m=0; m<n; m++){
            if(i - moedas[m] >= 0){
                answer[i] += answer[i-moedas[m]];
                answer[i] %= mod;
            }
        }
    }
    cout<<answer[x]<<endl;

    return 0;
}