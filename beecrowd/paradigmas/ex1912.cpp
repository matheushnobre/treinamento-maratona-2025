#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

double calcArea(double h, vector<int>& v){
  double a=0;
  for(int i=0; i<v.size(); i++){
    if(v[i] > h) a += static_cast<double> (v[i]) - h;
  }
  return a;
}

bool solve(){
    int n, a, soma=0;
    cin>>n>>a;
    if(n == 0) return false;
    
    vector<int> v(n);
    for(int i=0; i<n; i++) {
      cin>>v[i];
      soma += v[i];
    }
    
    if(soma == a){
      cout<<":D"<<endl;
      return true;
    }
    else if(soma < a){
      cout<<"-.-"<<endl;
      return true;
    }
    
    double i=0, j=1e9+10, m;
    while(j - i > 1e-7){
      m = (i+j)/2;
      double aux = calcArea(m, v);
      if(aux == a){
        cout<<fixed<<setprecision(4)<<m<<endl;
        return true;
      } else if(aux < a){
        j = m;
      } else{
        i = m;
      }
    }
    
    cout<<fixed<<setprecision(4)<<m<<endl;
    return true;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    bool cont=true;
    while(cont) {
      cont = solve();
    }
    return 0;
}