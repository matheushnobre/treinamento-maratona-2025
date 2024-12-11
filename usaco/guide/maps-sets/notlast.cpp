#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    freopen("notlast.in", "r", stdin);
    freopen("notlast.out", "w", stdout);

    int n, qtd;
    string vaca;
    map<string, int> mapa = {{"Bessie", 0}, {"Maggie", 0}, {"Elsie", 0}, {"Henrietta", 0}, {"Gertie", 0}, {"Daisy", 0}, {"Annabelle", 0}};

    cin>>n;
    while(n--){
        cin>>vaca>>qtd;
        mapa[vaca] += qtd;
    }

    vector<pair<int, string>> vacas;
    for(auto &it : mapa)
        vacas.push_back({it.second, it.first});
    sort(vacas.begin(), vacas.end());

    int minimo = vacas[0].first;
    unsigned int i=0;
    while(i<vacas.size() and vacas[i].first == minimo)
        i++;
    
    if(i==vacas.size()) cout<<"Tie\n";
    else if(i==vacas.size()-1) cout<<vacas[i].second<<endl;
    else if(vacas[i].first != vacas[i+1].first) cout<<vacas[i].second<<endl;
    else cout<<"Tie\n";

    return 0;
}