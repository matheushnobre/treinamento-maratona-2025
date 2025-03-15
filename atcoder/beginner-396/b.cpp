#include <bits/stdc++.h>
using namespace std;

void solve(){
    int q, v, x;
    stack<int> pilha;
    for(int i=0; i<100; i++) pilha.push(0);
    cin>>q;
    while(q--){
      cin>>v;
      if(v == 2){
        cout<<pilha.top()<<endl;
        pilha.pop();
      } else{
        cin>>x;
        pilha.push(x);
      }
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