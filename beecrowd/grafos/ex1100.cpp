#include <bits/stdc++.h>
using namespace std;

typedef pair<int, int> ii;
typedef vector<ii> vii;

int bfs(int x1, int y1, int x2, int y2){
    if(x1 == x2 && y1 == y2) return 0;

    vector<vii> visitados (8, vii(9, {0, 0}));
    visitados[x1][y1] = {1, 0};
    queue<ii> fila;
    fila.push({x1, y1});

    int auxI[8] = {1, 1, 2, 2, -1, -1, -2, -2};
    int auxJ[8] = {2, -2, 1, -1, 2, -2, 1, -1};

    while(!fila.empty()){
        int x_atual = fila.front().first;
        int y_atual = fila.front().second;
        fila.pop();

        for(int i=0; i<8; i++){
            int x_vz = x_atual + auxI[i];
            int y_vz = y_atual + auxJ[i];

            if(x_vz>=0 && x_vz<8 && y_vz>=0 && y_vz<8){
                if(x_vz == x2 && y_vz == y2)
                    return visitados[x_atual][y_atual].second + 1;
                else if(visitados[x_vz][y_vz].first == 0){
                    visitados[x_vz][y_vz] = {1, visitados[x_atual][y_atual].second + 1};
                    fila.push({x_vz, y_vz});
                }
            }
        }
    }

    return 0;
}

int main(){
    ios::sync_with_stdio(false); cin.tie(0);

    string a, b;
    while(cin>>a>>b){
        int x1 = a[0] - 'a';
        int y1 = a[1] - '1';
        int x2 = b[0] - 'a';
        int y2 = b[1] - '1';

        int answer = bfs(x1, y1, x2, y2);
        cout<<"To get from "<<a<<" to "<<b<<" takes "<<answer<<" knight moves.\n";
    }

    return 0;
}