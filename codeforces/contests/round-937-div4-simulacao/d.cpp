#include <bits/stdc++.h>
using namespace std;

#define MAX 100010
vector<int> binary;
vector<bool> resolvido(MAX);
vector<bool> answer(MAX);

bool ehPossivel(int n){
    if(resolvido[n]) return answer[n];
    bool saida = false;
    for(int i : binary){
        if(n % i == 0) saida = ehPossivel(n / i);
        if(saida) break;
    }
    resolvido[n] = true;
    answer[n] = saida;
    return saida;
}

int solve(){
    int n;
    cin>>n;
    if(ehPossivel(n)) cout<<"YES\n";
    else cout<<"NO\n";
    return 0;
}

int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    binary = {1111, 1110, 1101, 1100, 1011, 1010, 1001, 1000, 111, 110, 101, 100, 11, 10, 10000, 10001, 10010, 10011, 10100, 10101, 10110, 10111, 11000, 11001, 11010, 11011, 11100, 11101, 11110, 11111};
    resolvido[1] = true;
    answer[1] = true;
    int t; cin>>t;
    while(t--) solve();
    return 0;
}

