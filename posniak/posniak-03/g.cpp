// Upsolving

#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n, answer=0;
    cin>>n;
    vector<int> valores(n+1);
    valores[0] = 0;
    for(int i=1; i<=n; i++) cin>>valores[i];

    for(int i=1; i<=n; i++){
        int valor = valores[i];
        int temp = valor, v2=1;

        while(temp < 2*n){
            int index = temp - i;
            if(index > 0 && index <= n && index != i){
                if(valores[index] == v2) answer++;
            }
            temp += valor;
            v2++;
        }
    }

    answer /= 2;
    cout<<answer<<endl;
}

int main(){
    int t;
    cin>>t;
    while(t--)
        solve();
    return 0;
}