#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> adj;
vector<bool> temp;
vector<bool> def;
vector<int> l;

const double eps = 1e-6;
const double pi = 3.141592653589793;

void visite(int v){
    if(temp[v]) {
        throw runtime_error("ciclo.");
    }

    if(!def[v]){
        temp[v] = true; 
        for(int w : adj[v]){
            visite(w); 
        }
        temp[v] = false; 
        def[v] = true;
        l.insert(l.begin(), v);
    }
}

vector<int> ordenacaoTopologica(int V){
    for(int v=0; v<V; v++){
        if(!def[v]){
            visite(v); 
        }
    }
    return l;
}

bool visao(vector<int>& p, vector<int>& q){
    int dx = q[0] - p[0];
    int dy = q[1] - p[1];
    double ang = atan2(dy, dx) * (180 / pi);
    if(ang < 0) ang += 360;

  //  cout<<"x1 = "<<p[0]<<", y1 = "<<p[1]<<", a = "<<p[2]<<", q = "<<p[3]<<", x2 = "<<q[0]<<", y2 = "<<q[1]<<endl;
  //  cout<<"Angulo = "<<ang<<endl<<endl;
    double inicio = (p[2] - p[3] + 360) % 360;
    double fim = (p[2] + p[3]) % 360;

    if(inicio <= fim){
        return(inicio <= ang+eps && ang-eps <= fim);
    } 
    return(ang+eps >= inicio || ang-eps <= fim);
    
}

void solve(){
    int n;
    cin>>n;
    adj.resize(n);
    
    vector<vector<int>> v;
    temp.resize(n, false);
    def.resize(n, false);

    for(int i=0; i<n; i++){
        int x, y, a, r;
        cin>>x>>y>>a>>r;
        v.push_back({x, y, a, r});
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(i == j) continue;
            if(visao(v[i], v[j])){
                //cout<<"i = "<<i<<" tem que vir antes de j = "<<j<<endl;
                adj[i].push_back(j);
            }
        }
    }

    // Após isso, aplicar ordenação topológica
    try{
        vector<int> ordenacao = ordenacaoTopologica(n);
        for(int v : ordenacao)
            cout<<v+1<< " ";
        cout<<endl;
    } catch(const runtime_error &e){
        cout<<-1<<endl;
    }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}