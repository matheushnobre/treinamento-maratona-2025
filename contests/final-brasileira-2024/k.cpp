#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, answer=0, c=1;
    string k;
    cin>>n>>k;

    if(n == 2){
        string saida="";
        bool confere;
        if(k[0] == '1') confere=0;
        else confere = 1;
        int temp=0;
        for(unsigned int i=0; i<k.size(); i++){
            if((k[i] == '1' && confere == 1) || k[i] == '0' && confere == 0) temp++;
            if(confere == 0) saida += '1';
            else saida += '0';
            confere = !confere;
        }
        answer = temp;

        if(k[0] == '0') confere = 0;
        else confere = 1;
        temp=0;
        for(unsigned int i=0; i<k.size(); i++){
            if((k[i] == '1' && confere == 1) || k[i] == '0' && confere == 0) temp++;
            if(confere == 0) k[i] = '1';
            else k[i] = '0';
            confere = !confere;
        }

        if(temp <= answer){
            answer = temp;
        } else{
            k = saida;
        }
    }

    else{
        for(unsigned int i=1; i<k.size(); i++){
            if(k[i] == k[i-1]) c++;
            else c = 1;
            if(c == n){
                answer++;
                c = 1;
                if(i != k.size()-1 && k[i+1] != k[i]){
                    if(k[i-1] == '1') k[i-1] = '0';
                    else k[i-1] = '1';
                } else{
                    if(k[i] == '1') k[i] = '0';
                    else k[i] = '1';
                }
            } 
        }
    }

    cout<<answer<<" "<<k<<endl;
    return 0;
}