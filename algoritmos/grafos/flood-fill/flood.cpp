// Exemplo com problema "Coloração de Cenário de Jogos - Beecrowd"

#include <bits/stdc++.h>
using namespace std;

char mapa[1030][1030];
int n, m;

int dx[4] = {1, -1, 0, 0};
int dy[4] = {0, 0, 1, -1};

bool isValid(int i, int j){
    return (i>=0 && i<n && j>=0 && j<m && mapa[i][j]=='.');
}

void floodFill(int i, int j){
    mapa[i][j] = 'o';
    queue<pair<int, int>> fila;
    fila.push({i, j});

    while (!fila.empty()){
        pair<int, int> atual = fila.front();
        fila.pop();

        for(int c=0; c<4; c++){
            int x = atual.first + dx[c];
            int y = atual.second + dy[c];

            if(isValid(x, y)){
                mapa[x][y] = 'o';
                fila.push({x, y});
            }
        }
    }
}

int main(){
    int cor = 0;
    cin>>n>>m;

    for (int i=0; i<n; i++){
        cin>>mapa[i];
    }

    for (int i=0; i<n; i++){
        for (int j=0; j<m; j++){
            if (mapa[i][j] == '.'){
                cor++;
                floodFill(i, j);
            }
        }
    }

    cout<<cor<<endl;
    return 0;
}