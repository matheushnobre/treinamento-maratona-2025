#include <bits/stdc++.h>
using namespace std;


void solve(){
    int n, x;
    cin>>n>>x;
    
    if(x == 0){
      if(n == 1) 
        cout<<-1<<endl;
      else if(n % 2 == 1)
        cout<<n+3<<endl;
      else
        cout<<n<<endl;
      
      return;
    }
    
    if(x == 1){
      if(n % 2 == 1) 
        cout<<n<<endl;
      else 
        cout<<n+3<<endl;
      return;
    }

    int c=0;
    for(int j=0; j<32; j++){
        if(x & (1 << j)){
            //cout<<"bit "<<j<<" ativado, soma += "<<pow(2, j)<<endl;
            c++;
        }
    }
    
    //cout<<"soma = "<<soma<<", c = "<<c<<endl;
    if(c > n){
      cout<<x<<endl;
    }
    else{
      if((n-c) % 2 == 0){
        cout<<(n-c) + x<<endl;
      } else{
        cout<<(n-c)+x+1<<endl;
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