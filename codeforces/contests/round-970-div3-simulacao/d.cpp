#include <bits/stdc++.h>
using namespace std;

int solve(){
    int n;
    string s;
    cin>>n;
    vector<int> vetor(n);
    for(int i=0; i<n; i++){
        cin>>vetor[i];
        vetor[i] -= 1;
    }
    cin>>s;

    vector<int> answers(n, 0);
    vector<bool> visitados(n);
    queue<int> passada;
    for(int i=0; i<n; i++){
        if(visitados[i]) continue;
        int temp = 0;
        int aux = i;

        while(!visitados[aux]){
            visitados[aux] = 1;
            passada.push(aux);
            aux = vetor[aux];
            if(s[aux] == '0') temp++;
        }

        while(!passada.empty()){
            int  v = passada.front();
            passada.pop();
            answers[v] = temp;
        }
    }

    for(int i : answers) cout<<i<<" ";
    cout<<endl;

    return 0;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t; cin>>t;
    while(t--) solve();
    return 0;
}