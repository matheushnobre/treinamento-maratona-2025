#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void dfs(int i, vector<vector<int>>& grafo, vector<int>& vis, vector<int>& comp){
  if(vis[i]) return;
  vis[i] = 1;
  comp.push_back(i);
  for(int vz : grafo[i]) dfs(vz, grafo, vis, comp);
}

void solve(){
    vector<vector<int>> grafo(26);
    vector<int> vis(26);
    vector<int> comp;
    
    int v, e;
    char a, b;
    cin>>v>>e;
    
    for(int i=0; i<e; i++){
      cin>>a>>b;
      grafo[a-'a'].push_back(b-'a');
      grafo[b-'a'].push_back(a-'a');
    }
    
    int ans=0;
    for(int i=0; i<v; i++){
      if(!vis[i]){
        dfs(i, grafo, vis, comp);
        sort(comp.begin(), comp.end());
        for(int v : comp){
          char c = v + 'a';
          cout<<c<<",";
        } cout<<endl;
        ans++;
        comp.clear();
      }
    }
    
    cout<<ans<<" connected components"<<endl<<endl;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    for(int ct=1; ct<=t; ct++){
      cout<<"Case #"<<ct<<":"<<endl;
      solve();
    }
    return 0;
}