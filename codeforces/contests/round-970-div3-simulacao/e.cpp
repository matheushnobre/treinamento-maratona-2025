#include <bits/stdc++.h>
using namespace std;

int solve(){
    int n;
    string s;
    cin>>n>>s;

    // Solução para N par
    if(n % 2 == 0){
        vector<int> freqPar(26);
        vector<int> freqImpar(26);

        for(int i=0; i<n; i++){
            if(i%2==1) freqPar[s[i]-'a']++;
            else freqImpar[s[i]-'a']++;
        }

        int maxPar=0;
        int maxImpar=0;
        for(int i=0; i<26; i++){
            maxPar = max(maxPar, freqPar[i]);
            maxImpar = max(maxImpar, freqImpar[i]);
        }
        int answer = n - maxPar - maxImpar;
        cout<<answer<<endl;
    } 

    // Solução para N ímpar
    else{
        vector<int> freqPar(26);
        vector<int> freqImpar(26);
        vector<vector<int>> auxPar(26);
        vector<vector<int>> auxImpar(26);
        int answer = 1e6;

        for(int i=0; i<n; i++){
            if(i%2==1) freqPar[s[i]-'a']++;
            else freqImpar[s[i]-'a']++;
            
            for(int j=0; j<26; j++){
                auxPar[j].push_back(freqPar[j]);
                auxImpar[j].push_back(freqImpar[j]);
            }
        }

        for(int i=0; i<n; i++){
            int maiorPar=0, maiorImpar=0;

            for(int l=0; l<26; l++){
                int parAtual = auxPar[l][i];
                int imparAtual = auxImpar[l][i];

                int novoPar = (parAtual) + (freqImpar[l] - imparAtual);
                int novoImpar = (imparAtual) + (freqPar[l] - parAtual);

                if(l == s[i]-'a'){
                    if(i%2==0) novoImpar--;
                    else novoPar--;
                }

                maiorPar = max(maiorPar, novoPar);
                maiorImpar = max(maiorImpar, novoImpar);
                int temp = n-1 - maiorPar - maiorImpar;
                answer = min(answer, temp);
            }
        }

        cout<<answer+1<<endl;
    }

    return 0;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t; cin>>t;
    while(t--) solve();
    return 0;
}