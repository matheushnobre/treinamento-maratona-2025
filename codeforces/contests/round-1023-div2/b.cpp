#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve(){
    int n, k, maior=0, menor=1e9+10;
    ll soma=0;
    cin>>n>>k;
    vector<int> a(n);
    for(int i=0; i<n; i++){
      cin>>a[i];
      maior = max(maior, a[i]);
      menor = min(menor, a[i]);
      soma += a[i];
    }
    
    int om=0;
    for(int i : a){
      if(i == maior) om++;
    }
    
    if(maior == menor && maior == 0){
      cout<<"Jerry"<<endl;
    }
    else if(maior-1 - menor > k){
      cout<<"Jerry"<<endl;
    } else if(maior - menor > k && om > 1){
      cout<<"Jerry"<<endl;
    }
    else if(soma % 2 == 0){
      cout<<"Jerry"<<endl;
    } else{
      cout<<"Tom"<<endl;
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