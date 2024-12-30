#include <bits/stdc++.h>
using namespace std;

int solve(){
    int n, par=0, impar=0;
    cin>>n;
    vector<int> vetor(n);
    for(int i=0; i<n; i++){
        cin>>vetor[i];
        if(vetor[i] % 2 == 0) par++;
        else impar++;
    }

    if((n % 2 == 0 && par != n / 2) || (n % 2 == 1 && par != n/2 + 1)){
        cout<<-1<<endl;
        return 0;
    }

    int saida = 0;
    for(int i=0; i<n; i++){
        if(i % 2 == 0 && vetor[i] % 2 == 1) saida++;
    }

    cout<<saida<<endl;
    return 0;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--)
        solve();
    return 0;
}