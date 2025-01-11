#include <bits/stdc++.h>
using namespace std;

int mdc(int x, int y){
    while (y != 0){
        int r = x % y;
        x = y;
        y = r;
    }
    return x;
}

void solve(){
    int x, maximo=0, answer=1;
    cin>>x;
    for(int y=1; y<x; y++){
        int temp = mdc(x, y) + y;
        if(temp >= maximo){
            maximo = temp;
            answer = y;
        }
    }

    cout<<answer<<endl;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--)
        solve();
    return 0;
}