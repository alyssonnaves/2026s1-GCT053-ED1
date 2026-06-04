#include<stdio.h>

int main(){
    int tamanho = 5;
    printf("sizeof(int) = %d\n", sizeof(int));
    // int v[5];
    int *v = (int*)malloc(tamanho*sizeof(int));
    // imprimir antes de atribuir valores
    for (int i = 0; i < tamanho; i++)
    {
        printf("[%d] = %d\n", i, v[i]);
    }

    for (int i = 0; i < tamanho; i++)
    {
        v[i] = 2*i;
    }

    // imprimir o conteudo
    for (int i = 0; i < tamanho; i++)
    {
        printf("[%d] = %d\n", i, v[i]);
    }
    free(v);
    v = NULL;    
    
    return 0;
}