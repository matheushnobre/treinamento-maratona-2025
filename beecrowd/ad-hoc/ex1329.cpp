#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve(int n){
    if(n == 0) return;
    int m=0, j=0;
    for(int i=0; i<n; i++){
      int v;
      cin>>v;
      if(v) j++;
      else m++;
    }
    
    printf("Mary won %d times and John won %d times\n", m, j);
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    while(cin>>n) solve(n);
    return 0;
}