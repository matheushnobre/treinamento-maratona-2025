// Memory Limit Exceeded 

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve(){
    int n, q;
    string s;
    map<string, int> answers;
    cin>>n>>q;
    for(int i=0; i<n; i++){
        string aux="";
        cin>>s;
        int tam = s.size(), tamAux=0;
        for(char c : s){
            aux += c;
            tamAux++;
            if(answers.count(aux) == 1) answers[aux] = min(answers[aux], tam - tamAux);
            else answers[aux] = tam - tamAux;
        }
    }

    for(int i=0; i<q; i++){
        cin>>s;
        if(answers.count(s) == 1) cout<<answers[s]<<endl;
        else cout<<-1<<endl;
    }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}