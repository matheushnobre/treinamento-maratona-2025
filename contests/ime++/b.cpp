#include <bits/stdc++.h>
using namespace std;

#define MAX 10000010
vector<int> crivo(MAX);
vector<int> cont(MAX);

void solve(){
    int n;
    cin>>n;

    int aux = n;
    while(aux > 2){
      //  cout<<"aux = "<<aux<<endl;
        if(crivo[aux] == 0) aux = cont[aux-1];
        else{
            cout<<"NO"<<endl;
            return;
        }
    }
    if(aux == 2)
    cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    crivo[0] = 1;
    crivo[1] = 1;

    for(int i=2; i*i<=MAX; i++){
        if(crivo[i] == 0){
            for(int j=i+i; j<MAX; j+=i) crivo[j] = 1;
        }
    }

    for(int i=2; i<MAX; i++){
        cont[i] = cont[i-1];
        if(crivo[i] == 0){
            cont[i]++;
        }
    }


    int t=1;
    cin>>t;
    while(t--) solve();
    return 0;
}