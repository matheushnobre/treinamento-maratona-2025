#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve(){
    int n;
    cin>>n;
    string s;
    vector<string> est(n);
    for(int i=0; i<n; i++) cin>>est[i];
    
    bool first=true;
    for(int i=0; i<n; i++){
      cin>>s;
      int cont=0;
      int total=s.size();
      for(char c : s) {
        if(c == 'P') cont++;
        else if(c=='M') total--;
      }
      
      //cout<<est[i]<<": presenca = "<<cont<<", total = "<<total<<", frequencia = "<<static_cast<double> (cont)/ static_cast<double>(total)<<endl;
      if(static_cast<double> (cont)/ static_cast<double>(total) < 0.75){
        if(first){
          cout<<est[i];
          first=false;
        } else cout<<" "<<est[i];
      }
    }
    
    cout<<endl;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--) solve();
    return 0;
}