#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve(){
    int n, x;
    cin>>n>>x;
    vector<int> a(n);
    for(int i=0; i<n; i++) cin>>a[i];
    
    int ans = 1e9, temp = n, soma = 0, i = 0;
    for(int j=0; j<n; j++){
      soma += a[j];
      temp--;
      if(soma == x) ans = min(ans, temp);
      while(soma > x){
        soma -= a[i];
        i++;
        temp++;
      }
    }
    
    if(ans == 1e9) cout<<-1<<endl;
    else cout<<ans<<endl;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--) solve();
    return 0;
}