#include <bits/stdc++.h>
using namespace std;

#define MAX 1010
vector<int> pai(MAX), peso(MAX);

struct cmp1{
    bool operator()(const vector<int>& a, const vector<int>&b){
        return a[0] > b[0]; 
    }
};

struct cmp2{
    bool operator()(const vector<int>& a, const vector<int>&b){
        return a[0] < b[0]; 
    }
};

int find(int x){
   // cout<<"find["<<x<<"],  pai[x] = "<<x<<endl;
    if(pai[x] == x) return x;
    return pai[x] = find(pai[x]);
}

int join(int u, int v){
    int a = find(u), b = find(v);
    //cout<<"u = "<<u<<", find(u) = "<<a<<", v = "<<v<<", find(v) = "<<b<<endl;
    if(a == b) return 0;

    if(peso[a] < peso[b]){
        pai[a] = b;
    } else if(peso[a] > peso[b]){
        pai[b] = a;
    } else{
        pai[b] = a;
        peso[a]++;
    }

    //cout<<"pai[a] = "<<pai[a]<<", pai[b] = "<<pai[b]<<endl;
    //cout<<find(a)<<endl<<find(b)<<endl<<endl;
    return 1;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    // inicializar pai e peso
    for(int i=0; i<MAX; i++) {
        pai[i] = i;
        peso[i] = 0;
    }
    
    int n, menor=0, maior=0;
    cin>>n;

    priority_queue<vector<int>, vector<vector<int>>, cmp1> fila1;
    priority_queue<vector<int>, vector<vector<int>>, cmp2> fila2;
    
    for(int i=0; i<n; i++){
        int u, v, w;
        cin>>u>>v>>w;
        fila1.push({w, u, v});
        fila2.push({w, u, v});
    }

    while(!fila1.empty()){
        vector<int> atual = fila1.top();
        fila1.pop();
        menor += atual[0] * join(atual[1], atual[2]);
    }

    // reiniciar vetor pai e peso
    for(int i=0; i<MAX; i++){
        pai[i] = i;
        peso[i] = 0;
    }

    while(!fila2.empty()){
        vector<int> atual = fila2.top();
        fila2.pop();
        maior += atual[0] * join(atual[1], atual[2]);
    }

    cout<<maior<<endl<<menor<<endl;

    return 0;
}