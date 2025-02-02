#include <bits/stdc++.h>
using namespace std;

void solve(int n){
    vector<int> a(n);
    int som=0;
    for(int i=0; i<n; i++){
        cin>>a[i];
        som += a[i];
    }

    if(som % n == 0){
        int med = som / n;
        int aux=0;
        for(int v : a) aux += abs(v-med);
        cout<<aux/2+1<<endl;
    } else{
        cout<<-1<<endl;
    }
}

int main(){
    ios::sync_with_stdio(0);
    int n;
    while(cin>>n){
        solve(n);
    }
}