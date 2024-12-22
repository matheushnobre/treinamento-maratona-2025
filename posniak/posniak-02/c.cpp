#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){
    int t, a, b;
    ll maximo=0, temp=0;

    cin>>t;
    for(int i=0; i<t; i++){
        cin>>a>>b;
        if(t==0) {
            maximo = a;
            temp = a;
        }
        temp -= a;
        temp += b;
        maximo = max(maximo, temp);
    }

    cout<<maximo<<endl;
    return 0;
}