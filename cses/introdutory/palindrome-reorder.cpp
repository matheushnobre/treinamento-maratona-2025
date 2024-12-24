#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    string s;
    char restando = '0';
    int o[26] = {0};
    cin>>s;
    string saida = s;
    for(char c : s) o[c-'A'] += 1;

    unsigned int i=0, j=s.size()-1;
    for(unsigned int k=0; k<26; k++){
        while(o[k] >= 2){
            saida[i] = k + 'A';
            saida[j] = k + 'A';
            o[k] -= 2;
            i++;
            j--;
        }

        if(o[k] == 1){
            if(restando == '0') restando = 'A' + k;
            else{
                cout<<"NO SOLUTION"<<endl;
                return 0;
            }
        } 
    }

    if(restando != '0') saida[i] = restando;
    cout<<saida<<endl;

    return 0;
}