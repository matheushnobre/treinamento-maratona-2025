#include <bits/stdc++.h>
using namespace std;

#define MAX 200010

int main(){
    int t, n, valor;
    cin>>t;
    while(t--){
        cin>>n;
        vector<int> vetor(n), saida(n);
        vector<int> aux(n+1, 0);

        for(int i=0; i<n; i++){
            cin>>vetor[i];
            aux[vetor[i]] = 1;
        }

        int lastFrequencia = 1;
        saida[0] = vetor[0];
        aux[vetor[0]] = 2;

        for(int i=1; i<n; i++){
            if(aux[vetor[i]] == 1){
                saida[i] = vetor[i];
                aux[vetor[i]] = 2;
            }
            else{
                for(int j=lastFrequencia; j<=n; j++){
                    if (aux[j] == 0){
                        aux[j] = 2;
                        saida[i] = j;
                        lastFrequencia = j;
                        break;
                    }
                }
            }
        }
        
        for(int i=0; i<n; i++) cout<<saida[i]<<" ";
        cout<<endl;
    }
    
    return 0;
}