#include <bits/stdc++.h> 
using namespace std;

typedef long long ll;

void solve(int n){
    map<int, pair<int, int>> mapa;
    map<int, pair<int, int>> ult;
    vector<pair<int, int>> ent(n);
    for(int i=0; i<n; i++) 
      cin>>ent[i].first>>ent[i].second;
    sort(ent.begin(), ent.end());
    int ans = 0;
    
    for(auto e : ent){
      int y = e.second;
      ult[y-2] = {1e9, 1e9};
      ult[y+2] = {1e9, 1e9};
      mapa[y-2] = {0, 0};
      mapa[y+2] = {0, 0};
    } 
    
    for(int e=0; e<n; e++){
      int x = ent[e].first, y = ent[e].second;
      if(ult[y+2].second != x){
        mapa[y].first = mapa[y+2].second + 1;
        ult[y].first = x;
      } else{
        mapa[y].first = max(mapa[y].first, mapa[y+2].second);
        ult[y].first = x;
      }
      if(ult[y-2].first != x){
        mapa[y].second = mapa[y-2].first + 1;
        ult[y].second = x;
      } else{
        mapa[y].second = max(mapa[y].second, mapa[y-2].first);
        ult[y].second = x;
      }
        
      ans = max(ans, mapa[y].first);
      ans = max(ans, mapa[y].second);
    }
    cout<<ans<<endl;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    while(cin>>n)solve(n);
    return 0;
}