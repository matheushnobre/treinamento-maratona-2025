#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve(){
   int n, q;
   cin>>n>>q;
   
   // 1º passo: ler valores e armazená-los no vetor auxiliar
   vector<pair<int, int>> aux;
   for(int i=0; i<n; i++){
     ll l, r, v;
     cin>>l>>r>>v;
     aux.push_back({l, v});
     aux.push_back({r, -v});
   }
   
   // 2º passo: criar dicionário com valores das posições de alteração
   sort(aux.begin(), aux.end());
   map<ll, ll> valor;
   ll soma=0;
   for(int i=0; i<aux.size(); i++){
     soma += aux[i].second;
     valor[aux[i].first] = soma;
   }
   
   valor[1e9+10] = 0;
   
   // 3º passo: criar soma de prefixos com valores conhecidos
   vector<ll> nums = {-1};
   vector<ll> prefix = {0};
   for(auto& v : valor){
     ll temp = prefix[prefix.size()-1] + (v.first - nums[nums.size()-1] - 1) * valor[nums[nums.size()-1]] + v.second;
     nums.push_back(v.first);
     prefix.push_back(temp);
   }

   // 4º passo: realizar consultas
   for(int i=0; i<q; i++){
      ll l, r;
      cin>>l>>r;
     
      ll idxr = lower_bound(nums.begin(), nums.end(), r) - nums.begin() - 1;
      ll idxl = lower_bound(nums.begin(), nums.end(), l) - nums.begin() - 1;
      
      ll vl, vr;
      if(nums[idxl] == l-1) vl = prefix[idxl];
      else{
        vl = prefix[idxl] + (l - nums[idxl]-1) * valor[nums[idxl]];
      }
      
      vr = prefix[idxr] + (r-nums[idxr]-1) * valor[nums[idxr]];
      
      cout<<vr-vl<<endl;
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