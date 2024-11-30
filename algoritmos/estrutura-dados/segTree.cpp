#include <bits/stdc++.h>
using namespace std;

#define MAXN 1000

int vetor[MAXN];
int tree[2*MAXN];

void criarSegmento(int n){
    for(int i=n; i<n*2; i++)
        tree[i] = vetor[i-n];
    
    for(int i=n-1; i>0; i--)
        tree[i] = tree[2*i] + tree[2*i+1];
}

void atualizar(int n, int i, int valor){
    i += n;
    tree[i] = valor;
    while(i > 0){
        i /= 2;
        tree[i] = tree[2*i] + tree[2*i+1];
    }
}

int consultar(int inicio, int fim, int n){
    inicio += n;
    fim += n;
    int soma = 0;
    while (inicio < fim) {
        if (inicio % 2 == 1) { 
            soma += tree[inicio];
            inicio++;
        }
        if (fim % 2 == 1) { 
            fim--;
            soma += tree[fim];
        }
        inicio /= 2;
        fim /= 2;
    }
    return soma;
}

int main(){
    ios::sync_with_stdio(false); cin.tie(0);

    // Vetor = {1, 2, 3, 4, 5, 6, 7, 8}
    int n = 8;
    for(int i=0; i<8; i++)
        vetor[i] = i+1;

    printf("Imprimindo o vetor:\n");
    for(int i=0; i<n; i++) printf("%d ", vetor[i]);

    // Construindo a árvore
    criarSegmento(n);

    // Árvore = {36, 10, 26, 3, 7, 11, 15, 1, 2, 3, 4, 5, 6, 7, 8}
    printf("\n\nArvore:\n");
    for(int i=0; i<2*n; i++) printf("%d ", tree[i]);

    // Atualizando índice 2 no vetor (valor 3) para 10
    atualizar(n, 2, 10);

    // Verificando mudanças
    printf("\nArvore apos atualizacao:\n");
    for(int i=0; i<2*n; i++) printf("%d ", tree[i]);

    // Consultando soma do índice 2 ao índice 6 (3 + 4 + 5 + 6 + 7)
    int soma = consultar(2, 6, n);
    printf("\nSoma = %d", soma);

    return 0;

}