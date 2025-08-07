#include <bits/stdc++.h>
using namespace std;

#define MAX 1000000
vector<int> primos;
map<int, int> aux;

bool ehPrimo(int n){
    if(n<2) return false;
    for(int i=2; i*i<=n; i++)
        if(n%i==0) return false;
    return true;
}

void solve(){
    int n;
    cin>>n;
    string ans = "YES";
    map<int, int> count;
    for(int i=0; i<n; i++){
        int v; 
        cin>>v;
        int d=0;
      //  cout<<endl<<"v = "<<v<<endl;
        while(v != 1){
            while(d < primos.size() && v % primos[d] != 0) d++;
            if(d == primos.size()){
                primos.push_back(v);
            } 
            count[primos[d]]++;
            v = v/primos[d];
        }
    }

    //cout<<auxcont<<endl;
    for(int i=0; i<primos.size(); i++){
        if(count[primos[i]] != 0 && count[primos[i]] % n != 0){
            cout<<"NO"<<endl;
            return;
        }
    }

    cout<<ans<<endl;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int j=0;
    for(int i=2; i*i<=MAX; i++)
        if(ehPrimo(i)) {
            primos.push_back(i);
            aux[i] = j;
            j++;
        }

    int t=1;
    cin>>t;
    while(t--) solve();
    return 0;
}