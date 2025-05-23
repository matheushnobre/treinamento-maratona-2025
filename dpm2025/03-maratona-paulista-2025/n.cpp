#include <bits/stdc++.h>
using namespace std;

#define MAX 1000010
vector<int> crivo(MAX);
vector<int> primos;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    // verifica quais são os primos <= 1000
    crivo[0] = 1;
    crivo[1] = 1;
    for(int i=2; i*i<=MAX; i++){
        if(crivo[i] == 0){
            primos.push_back(i);
            for(int j=i; j<MAX; j+=i){
                crivo[j] = 1;
            }
        }
    }

    // solução do problema de fato
    int n, ans=0;
    cin>>n;

    map<int, int> ap;
    map<int, int> kacesos;
    map<int, int> freq;

    for(int i=0; i<n; i++){
        int x;
        cin>>x;

        // verifica se vai acender ou apagar
        int s;
        if(ap[x]){
            ap[x] = 0;
            s = -1;
        } else{
            ap[x] = 1;
            s = 1;
        }
        
        // onde vai acender ou apagar
        for(int p : primos){
            if(x % p == 0){
                if(s == 1){
                    freq[kacesos[p]]--; 
                    kacesos[p]++; 
                    ans = max(kacesos[p], ans); 
                    freq[kacesos[p]]++; 
                } else{
                    freq[kacesos[p]]--; 
                    if(kacesos[p] == ans){ 
                        if(freq[kacesos[p]] == 0) ans--; 
                    }
                    kacesos[p]--; 
                    freq[kacesos[p]]++; 
                }
            }
            while(x % p == 0) x/=p;    
        }
    
        if(x > 1){
            int p = x;
            if(s == 1){
                freq[kacesos[x]]--; // diminui a frequência daquela resposta
                kacesos[x]++; // aumenta o valor de kacesos[p] porque tem +1 aceso
                ans = max(kacesos[x], ans); // atualiza ans se necessário
                freq[kacesos[x]]++; // aumenta a frequência do kacesos[p], ou seja, da nova resposta
            } else{
                freq[kacesos[x]]--; // diminui a frequencia de resposta
                if(kacesos[x] == ans){ // se a qtd de acesos coincide com a resposta
                    if(freq[kacesos[x]] == 0) ans--; // frequencia daquela resposta passa a ser zero, decremento
                }
                kacesos[x]--; // um aceso a menos
                freq[kacesos[x]]++; 
            }
        }
        cout<<ans<<endl;
    }
}