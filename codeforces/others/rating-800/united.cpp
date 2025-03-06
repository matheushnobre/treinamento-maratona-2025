#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve(){
    int n;
    cin>>n;
    vector<int> a(n), b, c;
    for(int i=0; i<n; i++) cin>>a[i];
    sort(a.begin(), a.end());
    
    b.push_back(a[0]);
    int i=1;
    while(i < n && a[i] == a[i-1]){
      b.push_back(a[i]);
      i++;
    }
    
    if(i == n){
      cout<<-1<<endl;
      return;
    } 
    
    while(i < n){
      c.push_back(a[i]);
      i++;
    }
    
    cout<<b.size()<<" "<<c.size()<<endl;
    for(int i : b) cout<<i<<" ";
    cout<<endl;
    for(int i : c) cout<<i<<" ";
    cout<<endl;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--) solve();
    return 0;
}