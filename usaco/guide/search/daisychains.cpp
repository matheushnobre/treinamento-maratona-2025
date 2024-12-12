#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    int n, answer=0;
    cin>>n;
    vector<int> vetor(n);
    for(int i=0; i<n; i++) cin>>vetor[i];

    for(int i=0; i<n; i++){
        int soma=0;
        for(int j=i; j<n; j++){
            soma += vetor[j];
            if(soma % (j-i+1) == 0){
                int media = soma / (j-i+1);
                for(int k=i; k<=j; k++){
                    if(vetor[k] == media){
                        answer++;
                        break;
                    }
                }
            }
        }
    }
    cout<<answer<<endl;
    return 0;
}