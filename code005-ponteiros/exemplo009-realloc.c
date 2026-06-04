#include<stdio.h>
#include<stdlib.h>
void imprimir(int *v, int n){
    for (int i = 0; i < n; i++)
    {
        printf("[%d] = %d\n", i, v[i]);
    }
    printf("---------\n");
}
int main(){
    int n = 4;
    int *vetor = (int*)malloc(n * sizeof(int) );
    if (!vetor){
        printf("Falha na alocacao\n");
        return 1;
    }
    for (int i = 0; i < n; i++)
    {
        vetor[i] = 10*(i+1);
    }
    imprimir(vetor, n);

    int novo_n = 8;
    int *tmp = (int*)realloc(vetor, novo_n * sizeof(int));
    if (!tmp){
        // se falhou realocar e encerra  
        // acao
        free(vetor);
        return 1;
    }

    vetor = tmp;
    for (int i = n; i < novo_n; i++)
    {
        vetor[i] = 100 + i;
    }
    imprimir(vetor, novo_n);
    free(vetor); // liberar memoria
    // free(vetor);
    vetor = NULL;
    return 0;
}