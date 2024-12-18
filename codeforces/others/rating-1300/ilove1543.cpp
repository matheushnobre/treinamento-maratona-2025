#include <bits/stdc++.h>
using namespace std;

#define MAX 1010

int main(){
    int t, n, m, answer;
    string linha;
    int matriz[MAX][MAX];
    cin>>t;
    for(int ct=0; ct<t; ct++){
        answer=0;
        cin>>n>>m;
        cin.ignore();
        for(int i=0; i<n; i++){
            getline(cin, linha);
            for(int j=0; j<m; j++){
                matriz[i][j] = linha[j] - '0';
            }
        }

        int valor[4] = {1, 5, 4, 3};

        int c=0;
        while(c < min(n, m) / 2){
            vector<int> vetor;
            for(int j=c; j<m-c; j++)
                vetor.push_back(matriz[c][j]);

            for(int i=c+1; i<n-c; i++)
                vetor.push_back(matriz[i][m-c-1]);


            for(int j=m-c-2; j>=c; j--)
                vetor.push_back(matriz[n-c-1][j]);

            for(int i=n-c-2; i>c; i--)
                vetor.push_back(matriz[i][c]);

            for(int i=0; i<3; i++)
                vetor.push_back(vetor[i]);

            c++;

            int i=0;
            for(int v : vetor){
                if(v == valor[i]){
                    i++;
                    if(i == 4){
                        answer++;
                        i=0;
                    }
                } else{
                    if(v == 1) i=1;
                    else i=0;
                }
            } 
        }

        if(min(n, m) % 2 == 1){
            vector<int> vetor;
            if(min(n, m) == n){
                for(int j=n/2; j<m-n/2; j++) vetor.push_back(matriz[n/2][j]);
            } else{
                for(int i=m/2; i<n-m/2; i++) vetor.push_back(matriz[i][m/2]);
            }
            int i=0;
            for(int v : vetor){
                if(v == valor[i]){
                    i++;
                    if(i == 4){
                        answer++;
                        i=0;
                    }
                } else {
                    if(v == 1) i=1;
                    else i=0;
                }
            } 
        }

        cout<<answer<<endl;;
    }


    return 0;
}