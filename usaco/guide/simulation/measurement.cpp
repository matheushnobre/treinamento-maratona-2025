#include <bits/stdc++.h>
using namespace std;

int main(){
    freopen("measurement.in", "r", stdin);
    freopen("measurement.out", "w", stdout);

    map<string, int> cows;
    vector<vector<pair<string, int>>> medicoes(101);
    set<string> lideranca;
    int n, d, q;
    string s;

    cin>>n;
    while(n--){
        cin>>d>>s>>q;
        medicoes[d-1].push_back({s, q});
        cows[s] = 7;
        lideranca.insert(s);
    }

    int answer=0;
    for(int i=0; i<101; i++){
        for(pair<string, int> par : medicoes[i])
            cows[par.first] += par.second;
        
        int maiorTemp=0;
        set<string> liderTemp;
        for(auto &it : cows) {
            if(it.second > maiorTemp){
                liderTemp.clear();
                liderTemp.insert(it.first);
                maiorTemp = it.second;
            } else if(it.second == maiorTemp){
                liderTemp.insert(it.first);
            }
        }
        
        set<string> diferenca;
        set_difference(lideranca.begin(), lideranca.end(), liderTemp.begin(), liderTemp.end(), inserter(diferenca, diferenca.begin()));
        if(diferenca.size() != 0 || lideranca.size() != liderTemp.size()) 
            answer++;
        lideranca = liderTemp;
    }

    cout<<answer<<endl;
    return 0;
}

