#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve(){
   int n, c=0;
   string o;
   stack<int> pilha;
   
   cin>>n;
   for(int i=0; i<n; i++){
     cin>>o;
     if(o == "PUSH"){
       int v;
       cin>>v;
       if(c==0) pilha.push(v);
       else pilha.push(min(v, pilha.top()));
       c++;
     } else if(o == "MIN"){
       if(c!=0) cout<<pilha.top()<<endl;
       else cout<<"EMPTY"<<endl;
     } else{
        if(c!=0) {
         pilha.pop();
         c--;
        }
       else cout<<"EMPTY"<<endl;
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