// Append and Panic!
// Este problema foi passado por nossa equipe na Final Brasileira. Entretanto, utilizamos linguagem de Programação Python.

#include <bits/stdc++.h>
using namespace std;

int main(){
    string l = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    map<char, int> dic;
    for(int i=0; i<26; i++)
        dic[l[i]] = i;
    int o[26] = {0};
    string s;
    cin>>s;
    for(unsigned int i=0; i<s.size(); i++)
        o[dic[s[i]]] += 1;
    int a=0;
    for(int i=0; i<26; i++)
        a += max(o[i] - 1, 0);
    cout<<a<<endl;
    return 0;
}