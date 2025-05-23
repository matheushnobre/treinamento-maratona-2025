#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
map<string, int> words;
int n, k;

string f(string at){
 // cout<<at<<endl;
  if(at.size() > k) 
    return "";
  
  if(at != "" && !words[at]) 
    return at;
  
  at = at + 'a';
  for(int i=0; i<26; i++){
    char c = 'a' + i;
    at[at.size()-1] = c;
    string ans = f(at);
    if(ans != "") return ans;
  }
  
  return "";
}

void solve(){
    cin>>n>>k;
    
    for(int i=0; i<n; i++){
      string s;
      cin>>s;
      words[s]=1;
    }
    
    string ans = f("");
    cout<<ans<<endl;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t=1;
    //cin>>t;
    while(t--) solve();
    return 0;
}