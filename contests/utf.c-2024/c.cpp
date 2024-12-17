#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    int n, m;
    string nome;
    map<string, int> dic;
    cin>>n;
    while(n--){
        cin>>nome;
        dic[nome] = 0;
    }
    cin>>m;
    while(m--){
        cin>>nome;
        if(dic.count(nome) == 1) dic[nome]++;
    }

    for(auto &saida : dic){
        cout<<saida.first<<" "<<saida.second<<endl;
    }

    return 0;
}