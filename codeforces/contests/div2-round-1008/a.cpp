#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve(){
    int n, m=0;
    cin>>n;
    string s;
    cin>>s;
    
    for(int i=0; i<n-1; i++)
      if(s[i] == '<') m++;
    
    int mm = m+1;
    if(s[0] == '<') {
      cout<<mm<<" ";
      mm++;
    }
    else {
      cout<<m+1<<" ";
      mm++;
    }
    
    for(int i=0; i<n-1; i++){
      if(s[i] == '<') {
        cout<<m<<" ";
        m--;
      } else{
        cout<<mm<<" ";
        mm++;
      }
    }
    
    cout<<endl;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t=1;
    cin>>t;
    while(t--) solve();
    return 0;
}