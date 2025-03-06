#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
vector<int> aux;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n, c1=0, c2=0;
    string s;
    cin>>n;
    
    for(int i=0; i<n; i++){
      cin>>s;
      for(int i=1; i<s.size(); i++){
        if(s[i-1] == 'p' && s[i] == 'a') c1++;
      }
    }
    
    for(int i=0; i<n; i++){
      cin>>s;
      for(int i=1; i<s.size(); i++){
        if(s[i-1] == 'p' && s[i] == 'a') c2++;
      }
    }
    
    cout<<c2-c1<<endl;
    return 0;
}