#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve(){
    int n, q;
    cin>>n>>q;
    
    while(q--){
      string o;
      cin>>o;
      if(o == "->"){
        ll x, y;
        cin>>x>>y;
        
        ll ant=0;
        ll total = pow(2, 2*n);
        ll xmin=1, xmax=pow(2, n);
        ll ymin=1, ymax=pow(2, n);

        while (xmin != xmax && ymin != ymax){
          ll o1 = ant + total/4;
          ll o2 = ant + total/4 * 2;
          ll o3 = ant + total/4 * 3;
          ll o4 = ant + total/4 * 4;
          
          if(x >= xmin && x <=  (xmax+xmin) / 2 && y >= ymin && y <= (ymax+ymin) / 2){
            xmax =  (xmax+xmin) / 2;
            ymax = (ymax+ymin) / 2;
          } else if(x >= (xmax+xmin)/2 + 1 && x <= xmax && y >=(ymax+ymin)/2 + 1 && y <= ymax ){
            xmin = (xmax+xmin)/2 + 1;
            ymin = (ymax+ymin)/2 + 1;
            ant = o1;
          } else if(x >= (xmax+xmin)/2 + 1 && x <= xmax && y >= ymin && y <=(ymax+ymin) / 2){
            xmin = (xmax+xmin)/2 + 1;
            ymax = (ymax+ymin) / 2;
            ant = o2;
          } else{
            xmax = (xmax+xmin) / 2;
            ymin = (ymax+ymin)/2+1;
            ant = o3;
          }
          
          total = total/4;
        }
        
        cout<<ant+1<<endl;
        
      } else{
        ll v;
        cin>>v;
        
        ll ant=0;
        ll total = pow(2, 2*n);
        ll xmin=1, xmax=pow(2, n);
        ll ymin=1, ymax=pow(2, n);
        
        while (xmin != xmax && ymin != ymax){
          ll o1 = ant + total/4;
          ll o2 = ant + total/4 * 2;
          ll o3 = ant + total/4 * 3;
          ll o4 = ant + total/4 * 4;
          
          if(v <= o1){
            xmax = (xmax+xmin) / 2;
            ymax = (ymax+ymin) / 2;
          } else if(v <= o2){
            xmin = (xmax+xmin)/2 + 1;
            ymin = (ymax+ymin)/2 + 1;
            ant = o1;
          } else if(v <= o3){
            xmin = (xmax+xmin)/2 + 1;
            ymax = (ymax+ymin) / 2;
            ant = o2;
          } else{
            xmax = (xmax+xmin) / 2;
            ymin = (ymax+ymin)/2+1;
            ant = o3;
          }
          
          total = total/4;
        }
        
        cout<<xmin<<" "<<ymin<<endl;
      }
    }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--) solve();
    return 0;
}