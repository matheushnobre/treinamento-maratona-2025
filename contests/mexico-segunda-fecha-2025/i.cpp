#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin>>n;
    while(n--){
        ll a, b;
        cin>>a>>b;

        if(a >= b){
            cout<<1<<endl;
            continue;
        } 

        int ans = 2;
        ll ant = a, aux = 2*a;
        while(aux < b){
            ll temp = aux;
            aux = ant + aux;
            ant = temp;
            ans++;
        }

        cout<<ans<<endl;
    }

    return 0;
}