#include <bits/stdc++.h>
using namespace std;

#define MAX 600

int main(){
    int r, c;
    char matriz[MAX][MAX];
    cin>>r>>c;
    for(int i=1; i<=r; i++)
        for(int j=1; j<=c; j++)
            cin>>matriz[i][j];

    int dx[4] = {1, -1, 0, 0};
    int dy[4] = {0, 0, 1, -1};
    
    bool possivel=true;
    for(int i=1; i<=r; i++){
        for(int j=1; j<=c; j++){
            if(matriz[i][j] == 'S'){
                for(int k=0; k<4; k++){
                    if(matriz[i+dx[k]][j+dy[k]] == 'W') possivel=false;
                    else if(matriz[i+dx[k]][j+dy[k]] == '.') matriz[i+dx[k]][j+dy[k]] = 'D';
                }
            }
        }
    }

    if(possivel) {
        cout<<"Yes"<<endl;
        for(int i=1; i<=r; i++){
            for(int j=1; j<=c; j++){
                cout<<matriz[i][j];
            } cout<<endl;
        }
    } else cout<<"No"<<endl;
    return 0;
}
