#include <bits/stdc++.h>
using namespace std;

struct Soldado{
    int valor;
    Soldado* esquerda;
    Soldado* direita;

    Soldado(int v){
        valor = v;
        esquerda = nullptr;
        direita = nullptr ;
    }
};

vector<Soldado*> criarSoldados(int s) {
    vector<Soldado*> soldados;
    soldados.push_back(new Soldado(1));
    Soldado* aux = soldados[0];
    for (int i=1; i<s; i++) {
        aux->direita = new Soldado(i+1);
        aux->direita->esquerda = aux;
        aux = aux->direita;
        soldados.push_back(aux);
    }
    return soldados;
}

int solve(int s, int b) {
    int l, r;
    vector<Soldado*> soldados = criarSoldados(s);

    while (b--) {
        cin >> l >> r;
        Soldado* esq = soldados[l - 1];
        Soldado* dir = soldados[r - 1];

        
        if (!esq->esquerda) cout << "* ";
        else cout << esq->esquerda->valor << " ";

        if (!dir->direita) cout << "*" << endl;
        else cout << dir->direita->valor << endl;


        if (esq->esquerda) esq->esquerda->direita = dir->direita;
        if (dir->direita) dir->direita->esquerda = esq->esquerda;


        for (int i = l - 1; i <= r - 1; i++) {
            delete soldados[i];
            soldados[i] = nullptr;  
        }
    }

    for (Soldado* soldado : soldados) {
        if (soldado) delete soldado;
    }

    cout << "-" << endl;
    return 0;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int s, b;
    cin >> s >> b;
    while (s != 0) {
        solve(s, b);
        cin >> s >> b;
    }

    return 0;
}
