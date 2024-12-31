#include <bits/stdc++.h>
using namespace std;

struct NoTrie{
    int answer;
    NoTrie* filhos[26];

    NoTrie(int tam){
        answer = tam;
        for(int i=0; i<26; i++) filhos[i] = nullptr;
    }
};

void inserir(NoTrie* raiz, string palavra){
    NoTrie* no = raiz;
    for(unsigned int i=0; i<palavra.size(); i++){
        char c = palavra[i];
        int index = c - 'a';
        if(no->filhos[index] == nullptr)
            no->filhos[index] = new NoTrie(palavra.size()-i-1);
        else 
            no->filhos[index]->answer = min(static_cast<int>(palavra.size() - i - 1), no->filhos[index]->answer);
        no = no->filhos[index];
    }
}

int consultar(NoTrie* raiz, string palavra){
    NoTrie* no = raiz;
    for(unsigned int i=0; i<palavra.size(); i++){
        char c = palavra[i];
        int index = c - 'a';
        if(no->filhos[index] == nullptr)
            return -1;
        no = no->filhos[index];
    }
    return no->answer;
}

void solve(){
    int n, q;
    string s;
    NoTrie* raiz = new NoTrie(1000000);
    cin>>n>>q;
    while(n--){
        cin>>s;
        inserir(raiz, s);
    }
    while(q--){
        cin>>s;
        cout<<consultar(raiz, s)<<endl;
    }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}