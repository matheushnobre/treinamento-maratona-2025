#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve(int n){
    if(n==0) return;
    vector<int> pai(n), distancia(n), nivel(n);
    for(int i=1; i<n; i++) {
      cin>>pai[i]>>distancia[i];
      nivel[i] = nivel[pai[i]]+1;
    }
    
    int q, a, b;
    cin>>q;
    while(q--){
      cin>>a>>b;
      ll dist=0;
      
      while(a!=b){
        if(nivel[a] < nivel[b]) swap(a, b);
        dist += distancia[a];
        a = pai[a];
      }
      
      cout<<dist;
      if(q>=1) cout<<" ";
      
    } cout<<endl;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    while(cin>>n) solve(n);
    return 0;
}