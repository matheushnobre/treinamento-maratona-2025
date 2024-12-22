// Resolvido após o contest

#include <bits/stdc++.h>
using namespace std;

bool solve(int n, int m){
    queue<int> fila;
    fila.push(n);
    while(!fila.empty()){
        int v = fila.front();
        fila.pop();
        if(v==m) return true;
        if(v % 3 == 0){
            fila.push(v/3);
            fila.push((v/3)*2);
        }
    }
    return false;
}

int main(){
    int t, n, m;
    cin>>t;
    while(t){
        cin>>n>>m;
        if(solve(n, m)) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
        t--;
    }


    return 0;
}