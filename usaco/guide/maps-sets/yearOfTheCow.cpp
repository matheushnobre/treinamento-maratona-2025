// Obs: criei Struct sem necessidade por falta de atenção no enunciado do aprendizado. Serve de aprendizado
// Lado positivo: pratiquei o uso de Struct, que não uso de forma frequente

#include <bits/stdc++.h>
using namespace std;

struct structAnimal{
    string nome;
    string animal;
    int year;

    structAnimal() : nome(""), animal(""), year(0) {}

    structAnimal(string no, string an, int y){
        nome = no;
        animal = an;
        year = y;
    }
};

int main(){
    structAnimal first("Bessie", "Ox", 0);
    map<string, int> dic = {{"Tiger", 1}, {"Rabbit", 2}, {"Dragon", 3}, {"Snake", 4}, {"Horse", 5}, {"Goat", 6}, {"Monkey", 7}, {"Rooster", 8}, {"Dog", 9}, {"Pig", 10}, {"Rat", 11}, {"Ox", 12}};
    map<string, structAnimal> cadastrados = {{"Bessie", first}};

    int n;
    string name1, b, i, word, animal, y, f, name2;
    cin>>n;

    while(n--){
        cin>>name1>>b>>i>>word>>animal>>y>>f>>name2;
        int year;
        structAnimal animal2 = cadastrados[name2];

        if(word=="previous"){
            if(dic[animal] > dic[animal2.animal]) year = 12 - dic[animal] + dic[animal2.animal];
            else if(dic[animal] == dic[animal2.animal]) year = 12;
            else year = dic[animal2.animal] - dic[animal];
            year *= -1;
        }
        else{
            if(dic[animal] < dic[animal2.animal]) year = 12 - dic[animal2.animal] + dic[animal];
            else if(dic[animal] == dic[animal2.animal]) year = 12;
            else year = dic[animal] - dic[animal2.animal];
        }

        structAnimal adicionar(name1, animal, cadastrados[name2].year + year);
        cadastrados[name1] = adicionar;
    }

    int yElsie = cadastrados["Elsie"].year;
    cout<<abs(yElsie)<<endl;

    return 0;
}