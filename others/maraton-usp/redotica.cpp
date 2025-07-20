#include <bits/stdc++.h>
using namespace std;

#define MAX 110
vector<int> pai(MAX), peso(MAX);

struct Compare{
    bool operator()(const vector<int>& a, const vector<int>& b){
        return a[0] > b[0];
    }
};

int find(int x){
    if(pai[x] == x) return x;
    return pai[x] = find(pai[x]);
}

int join(int a, int b){
    a = find(a);
    b = find(b);

    if(a == b) return 0;

    if(peso[a] < peso[b]){
        pai[b] = a;
    } else if(peso[a] > peso[b]){
        pai[a] = b;
    } else{
        pai[b] = a;
        peso[a]++;
    }

    return 1;
}

void solve(int n, int m, int t){
    if(n == 0) return;

    for(int i=0; i<=n; i++){
        pai[i] = i;
        peso[i] = 0;
    }

    priority_queue<vector<int>, vector<vector<int>>, Compare> fila;
    for(int i=0; i<m; i++){
        int x, y, z;
        cin>>x>>y>>z;
        if(x > y) swap(x, y);
        fila.push({z, x, y});
    }

    cout<<"Teste "<<t<<endl;
    while(!fila.empty()){
        vector<int> atual = fila.top();
        fila.pop();
        if(join(atual[1], atual[2])){
            cout<<atual[1]<<" "<<atual[2]<<endl;
        }
    }
    cout<<endl;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, m, t=1;
    while(cin>>n>>m) solve(n, m, t++);
    return 0;
}