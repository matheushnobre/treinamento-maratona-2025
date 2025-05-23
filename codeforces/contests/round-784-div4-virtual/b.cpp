#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve(){
    int n;
    cin>>n;
    vector<int> a(n);
    map<int, int> freq;
    
    for(int i=0; i<n; i++){
      cin>>a[i];
      freq[a[i]]++;
    }
    
    for(int i : a){
      if(freq[i] >= 3) {
        cout<<i<<endl;
        return;
      }
    }
    
    cout<<-1<<endl;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--) solve();
    return 0;
}