#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define MAX 2010
vector<int> seg(4*MAX);

int update(int i, int x, int p, int l, int r){
  if(i < l || i > r) return seg[p];
  if(l == r) return seg[p] = seg[p] + x;
  int m = (l+r)/2;
  return update(i, x, 2*p, l, m) + update(i, x, 2*p+1, m+1, r);
}

int query(int a, int b, int p, int l, int r){
  if(b < l || r < a) return 0;
  if(l == r) return seg[p];
  int m = (l+r)/2;
  return query(a, b, 2*p, l, m) + query(a, b, 2*p+1, m+1, r);
}

void solve(){
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0; i<n; i++) cin>>a[i];
    
    ll ans=0, l=1, r=1;
    for(int i=n-1; i>=0; i--){
      update(a[i], 1, 1, 0, 2000);
      ans += query(0, a[i]-1, 1, 0, 2000);
    }
    
    int saida = ans;
    for(int i=0; i<n; i++){
      int temp = ans;
      for(int j=i+1; j<n; j++){
        if(a[j] < a[i]) temp--;
        else if(a[j] > a[i]) temp++;
        
        if(temp < saida){
          saida = temp;
          l = i+1;
          r = j+1;
        }
      }
    }
    
    cout<<l<<" "<<r<<endl;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--) solve();
    return 0;
}