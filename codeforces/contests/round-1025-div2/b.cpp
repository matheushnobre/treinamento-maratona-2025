#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int c1(int n, int m, int a, int b){
  int ln, lm=1, ans=1;
    if(a <= (n-a)){
      ln = 1;
      n = a;
    } else{
      ln = a;
    }
    
    while(ln != n){
     // cout<<"ln = "<<ln<<", n = "<<n<<endl;
      if(n - ln == 1){
        n = ln;
      }
      else{
        int mid = (ln + n) / 2;
        n = mid;
      }
      ans++;
    }
   // cout<<"ln = "<<ln<<", n = "<<n<<endl;
    while(lm != m){
     // cout<<"lm = "<<lm<<", m = "<<m<<endl;
      if(m - lm == 1){
        m = lm;
      } else{
        int mid = (lm + m) / 2;
        m = mid;
      }
      ans++;
    }
    
    return ans;
}

int c2(int n, int m, int a, int b){
    int ln=1, lm=1, ans=1;
    if(b <= (m-b)){
      lm = 1;
      m = b;
    } else{
      lm = b;
    }
    
    
   // cout<<"lm = "<<lm<<", m = "<<m<<endl;
    while(lm != m){
     // cout<<"lm = "<<lm<<", m = "<<m<<endl;
      if(m - lm == 1){
        m = lm;
      } else{
        int mid = (lm + m) / 2;
        m = mid;
      }
      ans++;
    }
    
    while(ln != n){
     // cout<<"ln = "<<ln<<", n = "<<n<<endl;
      if(n - ln == 1){
        n = ln;
      }
      else{
        int mid = (ln + n) / 2;
        n = mid;
      }
      ans++;
    }
    
    return ans;
}

void solve(){
    int n, m, a, b;
    cin>>n>>m>>a>>b;
    
    cout<<min(c1(n, m, a, b), c2(n, m, a, b))<<endl;
  }

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--) solve();
    return 0;
}