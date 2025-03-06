#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
vector<int> aux;

void solve(){
    int k;
    cin>>k;
    if(k == 0){
      cout<<"1\n1 1"<<endl;
      return;
    }
    
    vector<int> val;
    int temp = 0;
    for(int i=499; i>=0; i--){
      while(temp < k){
        temp += aux[i];
        if(temp <= k) val.push_back(i+1);
      }
      if(temp > k) temp -= aux[i];
    }
    
    vector<pair<int, int>> saida;
    int v = val[0] + 1;
    for(int i=0; i<v; i++){
      saida.push_back({i, 0});
    }
    
    int y = 1;
    for(int i=1; i<val.size(); i++){
      int v = val[i];
      for(int newy=y; newy<v+y; newy++){
        saida.push_back({i-1, newy});
      }
      y += v;
    }
    
    cout<<saida.size()<<endl;
    for(pair<int, int> par : saida){
      cout<<par.first<<" "<<par.second<<endl;
    }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int temp = 0;
    for(int i=1; i<=500; i++){
      temp += i;
      aux.push_back(temp);
    }
    
    //for(int i : aux) cout<<i<<" ";
    
    int t;
    cin>>t;
    while(t--) solve();
    return 0;
}