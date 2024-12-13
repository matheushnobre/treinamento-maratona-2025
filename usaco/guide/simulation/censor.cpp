#include <bits/stdc++.h>
using namespace std;

int main(){
    freopen("censor.in", "r", stdin);
    freopen("censor.out", "w", stdout);

    string a, b, saida="";
    cin>>a>>b;

    for(unsigned int i=0; i<a.size(); i++){
        saida += a[i];
        if(saida.size() >= b.size()){
            bool igual = true;
            for(unsigned int j=1; j<=b.size(); j++){
                if(b[b.size()-j] != saida[saida.size()-j]){
                    igual = false;
                    break;
                } 
            }
            if(igual) saida.resize(saida.size() - b.size());
        }
    }

    cout<<saida<<endl;
    return 0;
}