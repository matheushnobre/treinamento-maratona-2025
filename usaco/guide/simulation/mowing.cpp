#include <bits/stdc++.h>
using namespace std;

int main(){
    freopen("mowing.in", "r", stdin);
    freopen("mowing.out", "w", stdout);
   
    int matriz[2000][2000];
    memset(matriz, -1, sizeof(matriz));

    int x = 1000, y = 1000, n, s, time = 1, answer = 1000000;
    matriz[x][y] = 0;
    char d;
    map<char, pair<int, int>> direcoes = {{'N', {-1, 0}}, {'S', {1, 0}}, {'E', {0, 1}}, {'W', {0, -1}}};

    cin>>n;
    for(int i=0; i<n; i++){
        cin>>d>>s;
        for(int j=0; j<s; j++){
            x += direcoes[d].first;
            y += direcoes[d].second;
            if(matriz[x][y] != -1)
                answer = min(time-matriz[x][y], answer);
            matriz[x][y] = time;
            time++;
        }
    }

    if(answer == 1000000) answer=-1;
    cout<<answer<<endl;
    return 0;
}