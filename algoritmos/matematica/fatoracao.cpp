#include <bits/stdc++.h>
using namespace std;

vector<int> fatorar(int n){
    vector<int> f;
    
    for(int i=2; i*i<=n; i++){
        while(n % i == 0){
            f.push_back(i);
            n /= i;
        }
    }

    if(n > 1)
        f.push_back(n);
    
    return f;
}


int main(){
    int n;
    cin>>n;

    vector<int> fatores = fatorar(n);
    for(int i : fatores) cout<<i<<" ";

    return 0;
}