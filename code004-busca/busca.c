#include <stdio.h>

int busca_sequencial(int v[], int n, int chave){
    for (int i = 0; i < n; i++)
    {
        if (v[i] == chave){
            return i;
        }
    } //  fim for
    return -1;  // nao encontrei chave
}

int busca_binaria_iterativa(int v[], int n, int chave){
    int inicio = 0;
    int fim = n-1;
    while (inicio <= fim){
        // calcula meio
        
        // compara se chave esta no meio
        // decidir se chave diferente do meio, se busca continua na direita ou esqu
    }

}

int main(){
    int vetor[] = {12, 3, 9, 21, 7, 18, 3, 14};
    int vetor_ordenado[] = {2,5,8,11,14,19,23,27,31};

    int x = 30;
    int tamanho = sizeof(vetor) / sizeof(vetor[0]);
    int indice = busca_sequencial(vetor, tamanho, x);
    if (indice != -1){
        printf("a chave %d foi encontrada no indice %d\n", x, indice);
    }else{
        printf("a chave %d nao esta presente no vetor\n", x);
    }

}