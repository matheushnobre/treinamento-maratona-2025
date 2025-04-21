#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve(int n, int g){
    vector<int> aux(n);
    
    for(int i=0; i<n; i++){
        int s, r;
        cin>>s>>r;
        aux[i] = s-r;
    }
    
    sort(aux.rbegin(), aux.rend());

    int ans=0;
    for(int i=0; i<n; i++){
      if(aux[i] > 0) ans+=3;
      
      else if(aux[i] == 0){
        if(g>0){
          ans+=3;
          g--;
        } else{
          ans+=1;
        }
      } 
      
      else{
        if(g >= abs(aux[i])){
          g-=abs(aux[i]);
          ans++;
          if(g > 0){
            g--;
            ans+=2;
          }
        }
      } 
    }
    
    cout<<ans<<endl;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, g;
    while(cin>>n>>g) solve(n, g);
    return 0;
}