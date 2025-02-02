#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int v;
    vector<int> c(101);
    while(cin>>v){
        c[v]++;
    }

    for(int i=0; i<=100; i++){
        while(c[i] > 0){
            cout<<i<<" ";
            c[i]--;
        }
    }
    
    return 0;
}