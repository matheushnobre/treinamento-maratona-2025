#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define MAX 1010
vector<vector<char>> matriz(MAX, vector<char>(MAX));
vector<vector<int>> ans(MAX, vector<int>(MAX, -1));
int h, w;
const int mod = 1e9+7;

int aux(int i, int j){
  if(i >= h || j >= w) return 0;
  if(matriz[i][j] == '#') return 0;
  if(ans[i][j] != -1) return ans[i][j];
  ans[i][j] = (aux(i+1, j) + aux(i, j+1)) % mod;
  return ans[i][j];
}

void solve(){
    cin>>h>>w;
    for(int i=0; i<h; i++)
      for(int j=0; j<w; j++)
        cin>>matriz[i][j];
        
    ans[h-1][w-1] = 1;
    cout<<aux(0, 0)<<endl;
  
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t=1;
    //cin>>t;
    while(t--) solve();
    return 0;
}