#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve(int n){
   vector<int> vetor;
   for(int i=0; i<n; i++){
     int x, y;
     cin>>x>>y;
     while(x<=y){
       vetor.push_back(x);
       x++;
     }
   }
   
   sort(vetor.begin(), vetor.end());
   int num;
   cin>>num;
   int index = lower_bound(vetor.begin(), vetor.end(), num) - vetor.begin();
   if(index >= vetor.size()) cout<<num<<" not found"<<endl;
   else{
     int final = upper_bound(vetor.begin(), vetor.end(), num) - vetor.begin();
     if(final <= index) cout<<num<<" not found"<<endl;
     else cout<<num<<" found from "<<index<<" to "<<final-1<<endl;
   }
  }

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    while(cin>>n) solve(n);
    return 0;
}