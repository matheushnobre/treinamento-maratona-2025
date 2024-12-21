#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){
    int n, x;
    ll mod = 1e9+7;
    cin>>n>>x;
    vector<int> ehMoeda(x+1);
    vector<int> moedas(n);
    vector<ll> answer(x+1);

    for(int i=0; i<n; i++){
        cin>>moedas[i];
        ehMoeda[i] = 1;
    }
    
    answer[0] = 1;
    for(int m : moedas){
        for(int i=1; i<=x; i++){
            if(i - m >= 0) {
                answer[i] += answer[i-m];
                answer[i] %= mod;
            }
        }
    }

    cout<<answer[x]<<endl;
    return 0;
}