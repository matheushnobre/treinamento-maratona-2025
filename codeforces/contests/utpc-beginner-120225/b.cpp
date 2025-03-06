#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    vector<pair<int, string>> words(n);
    string s;
    
    for(int i=0; i<n; i++){
      cin>>s;
      words[i] = {s.size(), s};
    }
    
    sort(words.begin(), words.end());
    string cert = words[0].second;
    int tam=cert.size();
    bool saida=true;
    
    for(auto s : words) {
      int i=0;
      int j=s.second.size()-tam;
      while(i<tam){
        if(s.second[j] != cert[i]) saida=false;
        i++;
        j++;
      }
    }
    if(saida){
      cout<<cert<<endl;
    } else{
      cout<<"Not found"<<endl;
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