#include <bits/stdc++.h>
using namespace std;

#define MAXN 400010

int tree[2*MAXN];
map<int, int> obri;

void criarSegmento(int n){
    for(int i=n; i<n*2; i++){
        tree[i] = min(1, obri[i-n]);
    }
        
    for(int i=n-1; i>0; i--){
        tree[i] = tree[2*i] * tree[2*i+1];
    }
}

int consultar(int inicio, int fim, int n){
    inicio += n;
    fim += n;
    int saida = 1;
    while(inicio < fim){
        if(inicio % 2 == 1){
            saida *= tree[inicio];
            inicio++;
        }
        if(fim % 2 == 1){
            fim--;
            saida *= tree[fim];
        }
        inicio /= 2;
        fim /= 2;
    }

    return saida;
}

void solve(){
    int n, l, r;
    obri.clear();
    string answer="";
    vector<pair<int, int>> e;
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>l>>r;
        if(l == r) obri[l] += 1; 
        e.push_back({l, r});
    }

    criarSegmento(2*n+5);

    for(int i=0; i<n; i++){
        l = e[i].first;
        r = e[i].second;
        bool s=false;
        if(l == r){
            if(obri[l] <= 1) s=true;
        } 
        else {
            s = !consultar(l, r+1, 2*n+5);
        }
              
        if(s) answer+='1';
        else answer+='0';
    }

    cout<<answer<<endl;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--) solve();
    return 0;
}