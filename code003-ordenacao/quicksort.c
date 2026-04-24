

#include <stdio.h>

void imprime(int v[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", v[i]);
    }
    printf("\n");
}


void trocar(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

// desafio - implementar a divisao
int dividir(int v[], int inicio, int fim){
    int pivo = v[inicio];
    int i = inicio+1;
    int j = fim;
    while (i<=j){
        while (i<=fim && v[i]<=pivo){
            i++;
        }
        while (j>inicio && v[j]>pivo){
            j--;
        }
        if (i < j){
            trocar(&v[i], &v[j]);
        }
    }
    // posicionar o pivo no indice j
    trocar(&v[inicio], &v[j]);

    return j;  // retorna o indice do pivo    
}

void quick_sort(int v[], int inicio, int fim){
    if (inicio < fim){
        int pos_pivo = dividir(v, inicio, fim);
        quick_sort(v, inicio, pos_pivo - 1);
        quick_sort(v, pos_pivo+1, fim);
    }
    // caso contrario - caso base
}

int main(){
    int v[] = {7,2,1,4,3,8,6,10};
    printf("Vetor original:\n");
    int tamanho = sizeof(v)/sizeof(v[0]);
    imprime(v,tamanho);
    quick_sort(v, 0, tamanho-1);
    printf("Vetor ordenado:\n");
    imprime(v,tamanho);
}