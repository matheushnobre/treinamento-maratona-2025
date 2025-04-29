#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve(){
    int n, k;
    cin>>n>>k;
    vector<int> a(n);
    for(int i=0; i<n; i++) cin>>a[i];
    
    // 110
    int men=0, mai=0, fim=-1;
    for(int i=0; i<n-2; i++){
      if(a[i] <= k) men++;
      else mai++;
      
      if(men >= mai){
        fim = i;
        break;
      }
    }
    
    if(fim==0 && a[1] > k && n > 3) fim++;
    
    if(fim != -1){
      men=0, mai=0;
      for(int i=fim+1; i<n-1; i++){
        if(a[i] <= k) men++;
        else mai++;
        
        if(men>=mai){
          cout<<"YES"<<endl;
          return;
        }
      }
      
      // 101
      men=0, mai=0;
      for(int i=n-1; i>fim+1; i--){
        if(a[i] <= k) men++;
        else mai++;
        
        if(men>=mai){
          cout<<"YES\n";
          return;
        }
      }
    }
    
    // 011 
    men=0, mai=0, fim=-1;
    for(int i=n-1; i>1; i--){
      if(a[i] <= k) men++;
      else mai++;
      
      if(men >= mai){
        fim = i;
        break;
      }
    }
    
    if(fim==-1){
      cout<<"NO"<<endl;
      return;
    }
    
    if(fim == n-1 && a[n-2]>k && n>3) fim--;
    men=0, mai=0;
    for(int i=fim-1; i>0; i--){
      if(a[i] <= k) men++;
      else mai++;
      if(men>=mai){
        cout<<"YES\n";
        return;
      }
    }
    
    cout<<"NO"<<endl;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int t=1;
    cin>>t;
    while(t--) solve();
    
    return 0;
}