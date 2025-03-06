#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve(){
    int n, m;
    cin>>n>>m;
    int qtd = (m/2);
    if(m % 2 == 1) qtd++;
    int aux = qtd * 15 - m*4;
    
    //cout<<"qtd = "<<qtd<<", aux = "<<aux<<endl;
    if(n > aux){
      int temp = n - aux;
      qtd += temp / 15;
      if(temp % 15 != 0) qtd++;
    }
    
    cout<<qtd<<endl;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--) solve();
    return 0;
}