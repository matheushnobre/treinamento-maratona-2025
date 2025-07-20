#include <bits/stdc++.h>
using namespace std;

int f(int n){
    for(int i=2; i*i<=n; i++){
        if(n % i == 0) return i;
    }
    return n;
}

void solve(){
    int n;
    cin>>n;

    vector<int> usado(n+1);
    vector<int> saida(n+1);

    saida[1] = 1;
    usado[1] = 1;
    for(int i=2; i<=n; i++){
        if(i*2 <= n){
            saida[i] = i*2;
            usado[i*2] = 1;
        } 
        
        else{
            int aux = i;
            while(true){
                if(aux % 2 == 0){
                    aux /= 2;
                    if(!usado[aux]){
                        saida[i] = aux;
                        usado[aux] = 1;
                        break;
                    } 
                } else{
                    int divisor = f(i);
                    usado[i] = 1;
                    if(divisor == i){ 
                        saida[i] = i;
                    } else{
                        int o = saida[divisor];
                        saida[divisor] = i;
                        saida[i] = o;
                    }
                    break;
                }
            }
        }
    }

    for(int i=1; i<=n; i++) cout<<saida[i]<<" ";
    cout<<endl;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t=1;
    cin>>t;
    while(t--) solve();
    return 0;
}