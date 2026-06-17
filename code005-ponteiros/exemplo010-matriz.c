#include <stdio.h>
#include <stdlib.h> // habilitar malloc e free
// int *vet_aloc(int n){

// }

int **mat_alloc(int n, int m){
    // ** -> o retorno vai ser um vetor de ponteiros (um ponteiro por linha)
    int **matriz = (int **)malloc(n*sizeof(int *));
    // int *vetor = (int *)malloc(n*sizeof(int));
    if (!matriz){  // se faltou memoria
        return NULL;  
    }
    for (int i=0; i<n; i++){
        matriz[i] = (int *)malloc(m*sizeof(int));
        if (!matriz[i]){
            for (int k = 0; k < i; k++){
                free(matriz[k]);
            }
            free(matriz);
            return NULL;
        }
    }
    return matriz;
}

void mat_free(int **matriz, int n){
    if (!matriz){ // controle caso a memoria ja foi liberada
        return;
    }
    for (int i = 0; i < n; i++)
    {
        free(matriz[i]);
    }
    free(matriz);   
    matriz = NULL; 
}

int main(){
    int linhas = 5, colunas = 8;
    int **mat = mat_alloc(linhas,colunas); // 5 linhas 8 colunas
    for (int i = 0; i < linhas; i++){   // preencher a matriz
        for (int j = 0; j < colunas; j++){
            mat[i][j] = 10*(i+1)+j;
        }
    }
    // visualizar - imprimir a matriz
    for (int i = 0; i < linhas; i++){
        for (int j = 0; j < colunas; j++){
           printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
    // liberar a memoria
    mat_free(mat, linhas);
}