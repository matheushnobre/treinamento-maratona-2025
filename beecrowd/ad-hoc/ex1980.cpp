#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll fat(int n){
  ll ans = 1;
  for(int i=1; i<=n; i++) ans *= i;
  return ans;
}

void solve(string s){
    if(s == "0") return;
    set<char> aux;
    
    for(char c: s) aux.insert(c);
    cout<<fat(aux.size())<<endl;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    string s;
    while(cin>>s) solve(s);
    return 0;
}