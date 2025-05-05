// Apenas esboço

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

#define MAXK 1010

vector<vector<int>> sensores(MAXK);
vector<int> pai(MAXK);
vector<int> peso(MAXK);

int find(int x){
    if(pai[x] == x) return x;
    return pai[x] = find(pai[x]);
}

void join(int x, int y){
    x = find(x);
    y = find(y);

    if(x == y) return;
    if(peso[x] < peso[y]) pai[x] = y;
    else if(peso[x] > peso[y]) pai[y] = x;
    else{
        pai[y] = x;
        peso[x]++;
    }
}

void solve(){
    int m, n, k, x, y, s;
    cin>>m>>n>>k;

    for(int i=0; i<MAXK; i++) pai[i] = i;

    for(int i=0; i<k; i++){
        cin>>x>>y>>s;
        sensores[i+4] = {x, y, s};
    }

    for(int i=4; i<k+4; i++){
        for(int j=i+1; j<k+4; j++){
            int x1 = sensores[i][0];
            int y1 = sensores[i][1];
            int s1 = sensores[i][2];

            int x2 = sensores[j][0];
            int y2 = sensores[j][1];
            int s2 = sensores[j][2];

            int dist = (x1-x2)*(x1-x2) + (y1-y2)*(y1-y2);
            int mp = (s1+s2)*(s1+s2);
            if(dist <= mp){
                join(i, j);
            }
        }
    }

    for(int i=4; i<k+4; i++){
        int x = sensores[i][0];
        int y = sensores[i][1];
        int s = sensores[i][2];

        if(y + s >= n) join(i, 0);
        if(x + s >= m) join(i, 1);
        if(y - s <= 0) join(i, 2);
        if(x - s <= 0) join(i, 3);
    }

    if(find(0) == find(1) || find(0) == find(2) || find(3) == find(1) || find(3) == find(2)){
        cout<<"N"<<endl;
    } else{
        cout<<"S"<<endl;
    }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t=1;
    //cin>>t;
    while(t--) solve();
    return 0;
}