#include <bits/stdc++.h>
using namespace std;

#define MAX 1010

map<pair<int, int>, char> dicionario = {{{0, 1}, 'L'}, {{0, -1}, 'R'}, {{-1, 0}, 'D'}, {{1, 0}, 'U'}};
vector<string> grafo;
int confere[MAX][MAX];
int dx[4] = {1, -1, 0, 0};
int dy[4] = {0, 0, 1, -1};
int t, n, m;

int dfs(int x, int y){
    if(confere[x][y] != -1) return 0;
    confere[x][y] = 1;

    for(int k=0; k<4; k++){
        int i = x + dx[k];
        int j = y + dy[k];
        if(i>=0 && i<n && j>=0 && j<m && grafo[i][j] == dicionario[{dx[k], dy[k]}])
            dfs(i, j); 
    }

    return 0;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    string s;
    cin>>t;
    while(t--){
        memset(confere, -1, sizeof(confere));
        grafo.clear();
        cin>>n>>m;
        
        for(int i=0; i<n; i++){
            cin>>s;
            grafo.push_back(s);
        }

        for(int j=0; j<m; j++){
            if(confere[0][j] == -1 && grafo[0][j] == 'U') dfs(0, j);
            if(confere[n-1][j] == -1 && grafo[n-1][j] == 'D') dfs(n-1, j);
        }

        for(int i=0; i<n; i++){
            if(confere[i][0] == -1 && grafo[i][0] == 'L') dfs(i, 0);
            if(confere[i][m-1] == -1 && grafo[i][m-1] == 'R') dfs(i, m-1);
        }


        int answer = 0;
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(grafo[i][j] == '?'){
                    for(int k=0; k<4; k++){
                        int newI = i + dx[k];
                        int newJ = j + dy[k];
                        if(newI>=0 && newI<n && newJ>=0 && newJ<m && confere[newI][newJ] == -1){
                            answer++;
                            break;
                        }
                    }
                } else if(confere[i][j] == -1) answer++;
            }
        }

        cout<<answer<<endl;
    }
}