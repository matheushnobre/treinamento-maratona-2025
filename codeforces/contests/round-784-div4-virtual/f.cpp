#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve(){
    int n, ans=0;
    cin>>n;
    vector<int> a(n);
    for(int i=0; i<n; i++) cin>>a[i];
    
    int i=0, j=n-1, sumA=0, sumB=0;
    while(i <= j){
      if(sumA <= sumB){
        sumA += a[i];
        i++;
      } else{
        sumB += a[j];
        j--;
      }
      if(sumA == sumB){
        ans = i + (n-j-1);
      }
    }
    
    cout<<ans<<endl;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--) solve();
    return 0;
}