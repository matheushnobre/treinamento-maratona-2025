#include <bits/stdc++.h>
using namespace std;

#define MAX 1000010
#define INF 10e10
typedef long long ll;

int main(){
    ll contagem[MAX] = {0};
    contagem[0] = 1;
    ll mod = 1e9 + 7;

    int n;
    cin>>n;

    for(int i=1; i<=n; i++){
        for(int j=1; j<=6 && j<=i; j++){
            contagem[i] = (contagem[i] + contagem[i-j]) % mod;
        }
    }

    cout<<contagem[n];

    return 0;
}