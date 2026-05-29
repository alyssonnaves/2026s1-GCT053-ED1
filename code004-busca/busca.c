#include <stdio.h>

int busca_sequencial(int v[], int n, int chave){
    int comparacoes = 0;
    for (int i = 0; i < n; i++)
    {
        comparacoes++;
        if (v[i] == chave){
            return i;
        }
    } //  fim for
    printf("\n%d comparacoes\n",comparacoes);
    return -1;  // nao encontrei chave
}

int busca_binaria_iterativa(int v[], int n, int chave){
    int inicio = 0;
    int fim = n-1;
    int comparacoes = 0;
    while (inicio <= fim){
        // calcula meio
        int meio = (inicio+fim)/2;
        comparacoes++;
        // compara se chave esta no meio
        if (chave == v[meio]){
            // encontramos o elemento
            return meio;
        }else if (chave < v[meio])
        {
            // buscar na esquerda
            fim = meio-1;
        }else{
            // a chave maior que o elemento do meio - buscar na direita
            inicio = meio+1;
        }     
    }
    printf("\n%d comparacoes\n",comparacoes);
    return -1;
}

int main(){
    int vetor[] = {31,2,8,5,19,27,23,11,14};
    int vetor_ordenado[] = {2,5,8,11,14,19,23,27,31};

    int x = 17;
    int tamanho = sizeof(vetor) / sizeof(vetor[0]);
    // int indice = busca_sequencial(vetor, tamanho, x);
    int indice = busca_binaria_iterativa(vetor_ordenado, tamanho, x);
    if (indice != -1){
        printf("a chave %d foi encontrada no indice %d\n", x, indice);
    }else{
        printf("a chave %d nao esta presente no vetor\n", x);
    }

}