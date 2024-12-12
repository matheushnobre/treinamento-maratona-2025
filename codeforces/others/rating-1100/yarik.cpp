#include <bits/stdc++.h>
using namespace std;

#define MAX 200010

int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    int t, n;
    int vetor[MAX];

    cin>>t;
    while(t--){
        cin>>n;
        for(int i=0; i<n; i++) cin>>vetor[i];

        int soma=max(vetor[0], 0), maximo=vetor[0];
        for(int i=1; i<n; i++){
            if(abs(vetor[i] % 2) != abs(vetor[i-1] % 2)) soma += vetor[i];
            else soma = vetor[i];

            maximo = max(soma, maximo);
            if(soma < 0) soma = 0;
        }

        cout<<maximo<<endl;
    }

    return 0;
}