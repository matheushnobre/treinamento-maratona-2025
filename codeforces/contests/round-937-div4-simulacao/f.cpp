#include <bits/stdc++.h>
using namespace std;

int solve(){
    int a, b, c, answer=0;
    cin>>a>>b>>c;

    // Se eu criar A nós do tipo A, eu fico com A+1 nós obrigatórios para preencher na minha árvore.
    // Este, obrigatoriamente, deverá ser o valor de C.
    if(a+1 != c){
        cout<<-1<<endl;
        return 0;
    }

    // Se a é diferente de 0 é porque eu preenchi a árvore com alguns nós de 2 filhos e parei em alguma altura
    if(a != 0){
        int altura = log2(a);
        int totalNestaAltura = 2*pow(2, altura)-1;
        int faltam = totalNestaAltura - a;
        b -= faltam;
        b += c;
        if(b < 0){
            cout<<altura<<endl;
            return 0;
        }

        int qtd2 = pow(2,altura) - (2*pow(2, altura)-1 - a);
        int aux = pow(2, altura) + qtd2;
        answer = altura + (b/aux);
        if(b % aux != 0) answer++;
    }

    else{
        answer = b+c-1;
    }

    cout<<answer<<endl;
    return 0;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--) solve();
    return 0;
}