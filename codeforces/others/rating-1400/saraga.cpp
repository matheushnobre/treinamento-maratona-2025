#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    string a, b;
    cin>>a>>b;

    string saidaPossivel = "";

    vector<string> o(26, "");
    string inicio = "";
    inicio += a[0];
    for(unsigned int i=1; i<a.size(); i++){
        int index = a[i] - 'a';
        inicio += a[i];
        if(o[index] == "") o[index] = inicio;
    }

    string sfinal = "";
    sfinal += b[b.size()-1];
    for(int i=b.size()-2; i>=0; i--){
        int index = b[i] - 'a';
        if(o[index] != ""){
            string saida = o[index];
            saida += sfinal;
            if(saidaPossivel == "" || saida.size() < saidaPossivel.size())
                saidaPossivel = saida;
        }
        o[index] = "";
        sfinal = b[i] + sfinal;
    }
    

    if(saidaPossivel == "") cout<<-1<<endl;
    else cout<<saidaPossivel<<endl;
    return 0;
}