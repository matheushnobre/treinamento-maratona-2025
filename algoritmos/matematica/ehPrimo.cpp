#include <bits/stdc++.h>
using namespace std;

bool ehPrimo(int n){
    if(n < 2) return false;
    else if(n == 2) return true;
    for(int i=2; i*i<=n; i++)
        if(n % i == 0) return false;
    return true;
}

int main(){
    int n;
    cin>>n;
    
    if(ehPrimo(n)) cout<<"SIM"<<endl;
    else cout<<"NAO"<<endl;

    return 0;
}