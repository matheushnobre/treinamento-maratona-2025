#include <bits/stdc++.h>
using namespace std;

char mapa[1010][1010];
int n, m, answer=0;

int dx[4] = {1, -1, 0, 0};
int dy[4] = {0, 0, 1, -1};

void floodFill(int i, int j){
    answer++;
    mapa[i][j] = '#';
    queue<pair<int, int>> fila;
    fila.push({i, j});

    while(!fila.empty()){
        int x = fila.front().first, y = fila.front().second;
        fila.pop();

        for(int k=0; k<4; k++){
            int nx = x + dx[k];
            int ny = y + dy[k];

            if(nx>=0 && nx<n && ny>=0 && ny<m && mapa[nx][ny]=='.'){
                mapa[nx][ny] = '#';
                fila.push({nx, ny});
            }
        }
    }
}


int main(){
    ios::sync_with_stdio(false); cin.tie(0);
    cin>>n>>m;
    for(int i=0; i<n; i++) cin>>mapa[i];
    
    for(int i=0; i<n; i++)
        for(int j=0; j<m; j++)
            if(mapa[i][j] == '.') floodFill(i, j);

    cout<<answer<<endl;

    return 0;
}