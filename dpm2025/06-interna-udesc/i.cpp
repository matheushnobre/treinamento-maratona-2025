#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> grafo(26, vector<int>(26));
vector<bool> temporario(26);
vector<bool> definitivo(26);
vector<int> saida;

void visite(int v){
    if(!definitivo[v]){
        temporario[v] = true;
        for(int i=0; i<26; i++){
            if(grafo[v][i]) visite(i);
        }
        temporario[v] = false;
        definitivo[v] = true;
        saida.insert(saida.begin(), v);
    }
}

void ordenacaoTopologica(){
    for(int i=0; i<26; i++){
        if(!definitivo[i]) visite(i);
    }
}

void solve(){
    int n; 
    cin>>n;

    for(int i=0; i<n; i++){
        string s;
        cin>>s;

        vector<int> atuais;
        for(int j=0; j<s.size(); j++){
            int v = s[j] - 'a';
            for(int l : atuais){
                if(j != 0 && s[j] != s[j-1] && l == v){
                    cout<<"NAO"<<endl;
                    return;
                }

                if(v != l){
                    grafo[l][v] = 1;
                    if(grafo[v][l]){
                        cout<<"NAO"<<endl;
                        return;
                    }
                }
            }

            atuais.push_back(v);
        }
    }

    cout<<"SIM"<<endl;
    ordenacaoTopologica();
    for(int i : saida) {
        char c = i + 'a';
        cout<<c;
    }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}