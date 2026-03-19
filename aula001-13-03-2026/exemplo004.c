#include <stdio.h>

void exibe(int v[], int n){
    for (int i = 0; i < n; i++)
    {
        printf("indice: %d, valor: %d\n", i, v[i]);
    }    
}

void zera(int v[], int n){
    for (int i = 0; i < n; i++)
    {
       v[i] = 0; 
    }    
}

int main(void){
    int a[5] = {10,20,30,40,50};
    printf("valores antes\n");
    exibe(a, 5);
    zera(a, 5);

    printf("valores depois\n");
    exibe(a, 5);
}

