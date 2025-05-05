#include <bits/stdc++.h>
using namespace std;

#define MAXN 1000010
int n, k, pai[MAXN], peso[MAXN];

int find(int x){
    if(pai[x] == x) return x;
    return pai[x] = find(pai[x]);
}

void join(int x, int y){
    x = find(x);
    y = find(y);

    if(x==y) return;
    if(peso[x] < peso[y]) pai[x] = y;
    if(peso[y] < peso[x]) pai[y] = x;

    if(peso[x] == peso[y]){
        pai[x] = y;
        peso[y]++;
    }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin>>n>>k;
    char o;
    int a, b;

    for(int i=0; i<MAXN; i++){
        pai[i] = i;
        peso[i] = 0;
    }

    while(k--){
        cin>>o>>a>>b;
        if(o == 'F'){
            join(a, b);
        } else{
            if(find(a) == find(b)){
                cout<<"S"<<endl;
            } else{
                cout<<"N"<<endl;
            }
        }
    }

    return 0;
}