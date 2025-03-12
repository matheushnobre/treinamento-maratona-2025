#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve(){
    int d, i, b, ans=0;
    cin>>d>>i>>b;
    vector<int> p(i);
    for(int c=0; c<i; c++) cin>>p[c];
    for(int c=0; c<b; c++){
      int q;
      cin>>q;
      int ind, qtd, pre=0;
      while(q--){
        cin>>ind>>qtd;
        pre += p[ind] * qtd;
      }
      ans = max(ans, d/pre);
    }
    cout<<ans<<endl;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--) solve();
    return 0;
}