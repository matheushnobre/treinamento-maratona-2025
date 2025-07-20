#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve(){
    int n, l, d, atual=0;
    cin>>n>>l;

    vector<int> qtd(l);
    qtd[0] = 1;

    for(int i=0; i<n-1; i++){
        cin>>d;
       // cout<<d+atual<<endl;
     //   cout<<(d+atual) % l<<endl;
        atual = (d+atual) % l;
        qtd[atual] += 1;
    }

    if(l % 3 != 0){
        cout<<0<<endl;
        return;
    }

    int aux = l/3;
    ll ans = 0;

    for(int i=0; i<aux; i++){
        ll temp = 1;
       // cout<<endl;
       // cout<<"a partir de i="<<i<<endl;
        for(int j=i; j<l; j+=aux) {
            temp *= qtd[j];
          //  cout<<"pega j = "<<j<<", temp vai a "<<temp<<endl;
        }
        ans += temp;
    }

    cout<<ans<<endl;
   // for(int i=0; i<l; i++){
     //   cout<<"posicao "<<i<<" possui "<<qtd[i]<<endl;
  //  }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t=1;
   // cin>>t;
    while(t--) solve();
    return 0;
}