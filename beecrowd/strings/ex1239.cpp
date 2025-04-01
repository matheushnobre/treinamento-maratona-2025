#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve(string s){
    int oast=0, ound=0;
    for(char c : s){
      if(c == '*'){
        if(oast % 2 == 0) cout<<"<b>";
        else cout<<"</b>";
        oast++;
      } else if(c == '_'){
        if(ound % 2 == 0) cout<<"<i>";
        else cout<<"</i>";
        ound++;
      } else{
        cout<<c;
      }
    }
    
    cout<<endl;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    string s;
    while(getline(cin, s)) solve(s);
    return 0;
}