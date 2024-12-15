#include <bits/stdc++.h>
using namespace std;

int main(){
    int t, n, m;
    char v;
    cin>>t;
    while(t--){
        cin>>n>>m;
        vector<vector<char>> matriz(n);
        int linhaMaior = 0, qtd = 0;

        for(int i=0; i<n; i++){
            int temp=0;
            for(int j=0; j<m; j++){
                cin>>v;
                matriz[i].push_back(v);
                if(v=='#') temp++;
            }

            if (temp>qtd){
                linhaMaior = i;
                qtd = temp;
            }

        }

        int esperado = qtd / 2 + 1, temp=0, saidaJ=-1;
        for(int i=0; i<m; i++){
            if(matriz[linhaMaior][i] == '#') temp++;
            if(temp == esperado && saidaJ==-1) saidaJ = i+1;
        }

        cout<<linhaMaior+1<<" "<<saidaJ<<endl;
    }


    return 0;
}