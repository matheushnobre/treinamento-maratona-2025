#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int vetor[6] = {0};
    int v;
    for (int i=0; i<4; i++){
        cin>>v;
        vetor[v] = 1;
    }
 
    for(int i=1; i<=5; i++){
        if(vetor[i] == 0) cout<<i<<endl;
    }
    
 
}