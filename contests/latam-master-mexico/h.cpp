#include <bits/stdc++.h>
using namespace std;

#define MAX 100010
typedef long long ll;
vector<int> seg(4*MAX);
vector<int> capacidade(MAX);

int update(int i, int x, int p, int l, int r){
  if(i<l || r<i) return seg[p];
  if(l == r) return seg[p]= min(seg[p] + x, capacidade[i]);
  int m = (l+r)/2;
  return seg[p] = update(i, x, 2*p, l, m) + update(i, x, 2*p+1, m+1, r);
}

int query(int a, int b, int p, int l, int r){
  if(b<l || r<a) return 0;
  if(a <= l && r<=b) return seg[p];
  int m = (l+r)/2;
  return query(a, b, 2*p, l, m) + query(a, b, 2*p+1, m+1, r);
}

void solve(){
    int n, m, q;
    cin>>n>>m>>q;
    for(int i=1; i<=n; i++) cin>>capacidade[i];
    
    vector<pair<int, int>> e(m);
    for(int i=0; i<m; i++){
      cin>>e[i].first>>e[i].second;
    }
    
    vector<vector<int>> queries(q);
    int a, b, c;
    for(int i=0; i<q; i++){
      cin>>a>>b>>c;
      queries[i] = {a, b, c, i};
    }
    
    sort(queries.begin(), queries.end());
    vector<int> answers(q);
    
    int ultAdd = 0;
    for(int i=0; i<q; i++){
      while(ultAdd < queries[i][0]){
        //cout<<"add"<<" "<<e[ultAdd].first<<" "<<e[ultAdd].second<<endl;
        update(e[ultAdd].first, e[ultAdd].second, 1, 0, n);
        ultAdd++;
        
        //cout<<"seg tree = ";
        //for(int i=0; i<4*n; i++) cout<<seg[i]<<" ";
        //cout<<endl;
      }
      //cout<<"query "<<queries[i][0]<<" "<<queries[i][3]<<endl;
      answers[queries[i][3]] = query(queries[i][1], queries[i][2], 1, 0, n);
    }
    
    
    for(int v : answers) cout<<v<<endl;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t=1;
  //  cin>>t;
    while(t--) solve();
    return 0;
}