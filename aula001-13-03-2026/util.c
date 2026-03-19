#include "util.h"
#include <stdio.h>

int main(){
    int v[] = {10, 20, 30, 40, 50};
    long long resultado = soma_vetor(v, 5);
    printf("Soma %d", resultado);
}

long long soma_vetor(int v[], int n){
    long long soma = 0;
    for (int i = 0; i < n; i++){
        soma += v[i];
    }
    return soma;
}

