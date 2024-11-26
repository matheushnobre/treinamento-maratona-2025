#include <bits/stdc++.h>
using namespace std;

char mapa[1010][1010];
int visitados[1010][1010] = {0};
vector<vector<pair<int, int>>> origens;

int n, m;
int dx[4] = {1, -1, 0, 0};
int dy[4] = {0, 0, 1, -1};

map<int, char> dic = {{0, 'U'}, {1, 'D'}, {2, 'L'}, {3, 'R'}};
string saida = "";

void recuperarCaminho(int nx, int ny, int x1, int y1){
    vector<pair<int, int>> caminho;
    int x = nx, y = ny;
    while(x != x1 || y != y1){
        caminho.push_back({x, y});
        tie(x, y) = origens[x][y];
    }
    reverse(caminho.begin(), caminho.end());

    for(unsigned int i=0; i<caminho.size(); i++){
        int px = caminho[i].first, py = caminho[i].second;
        for(int k=0; k<4; k++){
            if(x1 == px + dx[k] && y1 == py + dy[k]) {
                saida += dic[k];
                break;
            }
        }
        x1 = px;
        y1 = py;
    } 
    
}

bool bfs(int x1, int y1){
    visitados[x1][y1] = 1;
    
    queue<pair<int, int>> fila;
    fila.push({x1, y1});

    while(!fila.empty()){
        int xatual = fila.front().first, yatual = fila.front().second;
        fila.pop();

        for(int k=0; k<4; k++){
            int nx = xatual + dx[k];
            int ny = yatual + dy[k];

            if (nx>=0 && nx<n && ny>=0 && ny<m){
                if((mapa[nx][ny] == '.' || mapa[nx][ny] == 'B') && (visitados[nx][ny] == 0)){
                    visitados[nx][ny] = 1;
                    origens[nx][ny] = {xatual, yatual};
                    fila.push({nx, ny});
                }

                if(mapa[nx][ny] == 'B'){
                    recuperarCaminho(nx, ny, x1, y1);
                    return true;
                }
            }
        }
    }

    return false;
}

int main(){
    ios::sync_with_stdio(false); cin.tie(0);
    for(int i=0; i<1010; i++){
        vector<pair<int, int>> linha;
        for(int j=0; j<1010; j++)
            linha.push_back({-1, -1});
        origens.push_back(linha);
    }

    cin>>n>>m;
    int x1=0, y1=0;
    for(int i=0; i<n; i++)
        cin>>mapa[i];
    
    for(int i=0; i<n; i++)
        for(int j=0; j<m; j++)
            if(mapa[i][j] == 'A'){
                x1 = i;
                y1 = j;
            }

    if(bfs(x1, y1)){
        cout<<"YES"<<endl;
        cout<<saida.size()<<endl;
        cout<<saida<<endl;
    } else{
        cout<<"NO"<<endl;
    }

    return 0;
}