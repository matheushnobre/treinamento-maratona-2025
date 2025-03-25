#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve(){
    int n;
    cin>>n;
    vector<int> a(n);
    int p=0, f=0, l=0;
    
    for(int i=0; i<n; i++){
      cin>>a[i];
      if(a[i] == 0){
        if(p == 0) f = i;
        p++;
        l = i;
      }
    }
    
    if(p==0){
      cout<<1<<endl;
      cout<<1<<" "<<n<<endl;
    } else{
      if(f != l){
        if(f == 0 && l == n-1){
          cout<<3<<endl;
          cout<<"1 2"<<endl;
          cout<<"2 "<<n-1<<endl;
          cout<<"1 2"<<endl;
        } else{
          cout<<2<<endl;
          cout<<f+1<<" "<<l+1<<endl;
          cout<<1<<" "<<n-(l-f)<<endl;
        }
      } else{
        if(f == 0){
          cout<<2<<endl;
          cout<<"1 2"<<endl;
          cout<<"1 "<<n-1<<endl;
        } else if(l == n-1){
          cout<<2<<endl;
          cout<<n-1<<" "<<n<<endl;
          cout<<"1 "<<n-1<<endl;
        } else{
          cout<<2<<endl;
          cout<<f<<" "<<f+1<<endl;
          cout<<"1 "<<n-1<<endl;
        }
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