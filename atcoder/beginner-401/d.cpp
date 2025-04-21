#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const int mod = 1e9;

void solve(){
    int n, k;
    string s, ans="";
    cin>>n>>k>>s;
    vector<int> aux(n, 0);
    
    int o=0, it=0, p=0;
    for(int i=0; i<n; i++){
      if(s[i] == 'o'){
        o++;
        ans += 'o';
      } else if(s[i] == '.'){
        ans += '.';
      } else{
        if(i > 0 && s[i-1] == 'o'){
          ans += '.';
        } else if(i < n-1 && s[i+1] == 'o'){
          ans += '.';
        } else{
          ans += '?';
          it++;
        }
      }
      
      if(ans[i] != '?' || i == n-1){
        p += it/2 + it%2;
        if(it % 2 == 1){
          int inicio=i;
          if(ans[i] != '?') inicio--;
          for(int j=inicio; j>inicio-it; j-=2){
            if(ans[j] == '?') aux[j] = 1;
          }
        }
        it=0;
      }
    }
    
    if(p == (k-o)){
      for(int i=0; i<n; i++){
        if(aux[i] == 1) {
          ans[i] = 'o';
          if(i > 0) ans[i-1] = '.';
          if(i < n-1) ans[i+1] = '.';
        }
      }
    }
    
    if(k == o){
      for(int i=0; i<n; i++){
        if(ans[i] == '?') ans[i] = '.';
      }
    }
    
    cout<<ans<<endl;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t=1;
    //cin>>t;
    while(t--) solve();
    return 0;
}