#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
vector<int> aux;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    vector<int> cont(110);
    int n, m, v, ans=0;
    cin>>n;
    for(int i=0; i<n; i++){
      cin>>v;
      cont[v]++;
    }
    cin>>m;
    for(int i=0; i<m; i++){
      cin>>v;
      if(cont[v] > 0) ans++;
      cont[v]--;
    }
    
    cout<<ans<<endl;
    return 0;
}